package main

import (
	"os"
	"fmt"
	"bufio"
	// "strconv"
	"strings"
)

func check(e error) {
	if e != nil {
		panic(e)
	}
}

func main() {
	var flag string
	var filePath string

	fmt.Println("Enter secret message to encode into image:")
	reader := bufio.NewReader(os.Stdin)
	flag, err := reader.ReadString('\n')
	check(err)
	flag = strings.TrimSpace(flag)
	fmt.Printf("Secret message to encode: %s\n", flag)

	fmt.Println("Enter image file name:")
	filePath, err = reader.ReadString('\n')
	check(err)
	filePath = strings.TrimSpace(filePath)
	fmt.Printf("Image file name: %s\n", filePath)

	imageData, err := os.ReadFile(filePath)
	check(err)

	fmt.Println("Encoding secret message into image...")
	insertFlag(imageData, flag, filePath)
	fmt.Println("Done!")

	/*
	fmt.Println("Decoding image to verify flag...")
	imageData, err = os.ReadFile(filePath + ".encoded")
	check(err)
	flagDecoded := extractFlag(imageData)
	fmt.Println("Got flag: ", flagDecoded[:len(flag)])
	*/
}

func insertFlag(imageData []byte, flag string, outFile string) {
	flagBinary := stringToBinary(flag)
	for i := 0; i < len(flagBinary); i++ {
		if i < len(imageData) {
			imageData[i] = (imageData[i] & 0xF7) | ((flagBinary[i] & 0x01) << 0x03)
		}
	}
	
	err := os.WriteFile(outFile + ".encoded", imageData, 0644)
	check(err)
}

/*
func extractFlag(imageData []byte) string {
	var flag string

	for _, b := range imageData {
		flag += strconv.Itoa(int((b >> 0x03) & 0x01))
	}
	return binaryToASCII(flag)
}
*/

func stringToBinary(str string) string {
	var result strings.Builder
	for _, char := range str {
		result.WriteString(fmt.Sprintf("%08b", char))
	}

	return result.String()
}

func binaryToASCII(binary string) string {
	var result strings.Builder
	for i:= 0; i < len(binary); i += 8 {
		byteStr := binary[i:min(i+8, len(binary))]
		if len(byteStr) < 8 {
			break
		}
		byteVal := binaryToByte(byteStr)
		result.WriteByte(byteVal)
	}
	return result.String()
}

func binaryToByte(binary string) byte {
	byteVal := byte(0)
	for i, bit := range binary {
		if bit == '1' {
			byteVal |= 1 << uint(7-i)
		}
	}
	return byteVal
}

func min(a, b int) int {
	if a < b {
		return a
	} else {
		return b
	}
}
