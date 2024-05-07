# Steg
## Intern
### **Challenge**:
So we just hired an intern for our CTF. He wanted to make some challenges, but we told him to just make us a flyer to keep him occupied. Surely he didn't put a flag in here or else he's getting fired. Let us know..

### **Solution**:
- The cool, esoteric way of solving is to use **tweakpng**, go to palette, change the first color in the palette to black or any other dark color to reveal the flag. Alternatively, you can just use **StegSolve** and achieve the same results.

- **FLAG**: `CIT{f1r3_th1s_1nt3rn}`

## The Art of the Beast
### **Challenge**:
Embrace the dark, let the beast within rise, A journey of strength, beneath the moon's wise eyes. In silence and shadow, your true self you'll find, a beast of steg, untamed and unconfined. - Sensei

### **Solution**:
- Use **steghide** to extract the hidden binary.
    - `steghide -sf /path/to/image`

- Inside of the binary, there is some banter about MrBeast. There is a question to answer in the binary regarding a particular MrBeast video. The answer to question in binary is **tractor**

- I also forgot to strip symbols & obfuscate this a bit, so you could alternatively just use `strings` and be able to find the flag :(

- https://youtu.be/ayXxwJJId_c?si=SyCiVbwsAaeX04ga

- **FLAG**: `CIT{mist4_b34st}`

## I LOVE PRIME!
### **Challenge**:
I LOVE PRIME SO MUCH META MOON IS SO GOOD ITS SO FULFILLING MMMMM TASTY!

### **Solution**:
- Use **exiftool** to find flag in metadata. The flag is in the description of the image metadata.

- **FLAG**: `CIT{meta_moon_prime_yummy}`

## Drop me a chug jug!
### **Challenge**:
What does Fortnite have to do with wav files? I dunno..

### **Solution**:
- Spectrogram in **Audacity** reveals the flag. Alternatively you can use an online spectrum analyzer, however, majority of folks that did ended up getting distortion issues. This led to them being unable to view the flag correctly.

- **FLAG**: `CIT{f0rtN1T3_r0nni369!}`
