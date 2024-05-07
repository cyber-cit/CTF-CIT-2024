# Pixel Pursuit

### Challenge Description:
- Your friend left behind a secret message for you to decode. However, they didn't know how to use git and sent you the wrong revision of their decoder program! Oh well, you're up for the challenge anyways...

### Challenge Goal:
- Find and extract the hidden flag by reverse engineering the stego binary and encoded image file.

# Solution
- Given a steganography encoded image and a program to insert text into an image, the program must be reversed to understand how text was encoded.

### Message Encoding
The message to hide is converted into binary.
Each bit of the message is paired with a byte of the image, sequentially. Insert the bit into position 4 (counting from the least significant bit) of the paired image byte.
For example:
```
	"hello" --> 0110100001100101011011000110110001101111
	First bit: 0 --> 0000 0000 &  imageData[0]
	Second bit: 1 --> 0000 1000 & imageData[1]
	Third bit: 1 --> 0000 1000 & imageData[2]
	etc...
```

### Message Decoding
Perform the opposite of the steps listed above. The resulting message extracted from the image will be the flag.

## How to Build
```
go build -o stego main.go
strip --strip-all stego
```

## How to Create Image File with Flag
```
$ rm -f image.jpeg* stego && cp original.jpeg image.jpeg && sync && go build -o stego main.go && strip --strip-all stego && ./stego
Enter secret message to encode into image:
CIT{th3_b4ll0d_0f_m0n4_l!s4}
Secret message to encode: CIT{th3_b4ll0d_0f_m0n4_l!s4}
Enter image file name:
image.jpeg 
Image file name: image.jpeg
Encoding secret message into image...
Done!
```

## How to Decode Image File with Flag
Open main.go and re-insert the commented out lines, save the file, and then...

```
rm -f image.jpeg* stego && cp original.jpeg image.jpeg && sync && go build -o stego main.go && strip --strip-all stego && ./stego
Enter secret message to encode into image:
CIT{th3_b4ll0d_0f_m0n4_l!s4}
Secret message to encode: CIT{th3_b4ll0d_0f_m0n4_l!s4}
Enter image file name:
image.jpeg
Image file name: image.jpeg
Encoding secret message into image...
Done!
Decoding image to verify flag...
Got flag:  CIT{th3_b4ll0d_0f_m0n4_l!s4}
```

## Flag
**FLAG**: `CIT{th3_b4ll0d_0f_m0n4_l!s4}`