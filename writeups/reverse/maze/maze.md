# Maze

### Challenge Description:
- You've stumbled upon a mysterious binary called maze. It seems to be some kind of maze-solving program, but its inner workings are obscured. Your task is to reverse engineer the binary to understand how it works and find the hidden flag.

### Challenge Goal:
- Find and extract the hidden flag by reverse engineering the maze binary.


# Solution
Need to enter the correct n/s/e/w pattern into the program to reveal the flag.
Each n/s/e/w character entered by the user is xor'd into the xor encrypted flag.
Entering the correct maze pattern generated below solves the maze.
Entering an incorrect maze pattern will display the wrong xor decrypt flag result.

## How to Build
```
rustc main.rs -o maze
strip --strip-all maze
```

## Python Program to Generate Encrypted Flag
```
import random
str = "CIT{th!s_!s_th3_w4y}" #  flag to encrypt with maze directions
opts = ['n', 's', 'e', 'w']  # possible maze direction options

directions = []
enc_flag = []

for i in range(len(str)):
	direction = random.choice(opts)
	directions.append(direction)
	enc_flag.append(hex(ord(str[i]) ^ ord(direction)))

>>> directions
['s', 'n', 'w', 'n', 'w', 'e', 'w', 's', 's', 'w', 'e', 's', 's', 's', 'n', 's', 'w', 's', 'n', 's']
>>> enc_flag
['0x30', '0x27', '0x23', '0x15', '0x3', '0xd', '0x56', '0x0', '0x2c', '0x56', '0x16', '0x2c', '0x7', '0x1b', '0x5d', '0x2c', '0x0', '0x47', '0x17', '0xe']
>>>
```

## Flag
**FLAG**: `CIT{th!s_!s_th3_w4y}`