# Forensics
## Not a ZIP Bomb
### **Challenge**:
We told the intern to hide the flag within this ZIP. Did he listen?

### **Solution**:
- To be fair, I went into this challenge with no solution in mind I just wanted to make something fun lol. Essentially what my script did was make 50,000 folders. Within each of those folders, it created a `flag.txt` with 1 of 10 random fake flags in it. It would then pick a folder of those 50,000 and do it all over again. It ran 50 times and on the 50th time, it placed a `flag.txt` with ASCII art of Peter Griffin and the true flag.
  
- Some slight hiccups on CTFd with the flag for this one, but things got resolved upon first blood. Was very cool to see everyones solutions for this from those who I spoke it. From GPT 3.5 scripts to the old school `grep`, nice work.
  
- Easiest solution would be something as simple as: `grep -h -r 'CIT{' | sort | uniq -c`
  
- The path for this challenge was: `flag/flag_8244/flag_1402/flag_289/flag_7763/flag_5961/flag_8951/flag_3484/flag_368/flag_2769/flag_6293/flag_261/flag_9669/flag_8780/flag_6572/flag_4461/flag_57/flag_3470/flag_6509/flag_6212/flag_6901/flag_6791/flag_5897/flag_757/flag_7248/flag_8812/flag_3261/flag_6058/flag_6517/flag_2217/flag_2114/flag_4076/flag_1127/flag_1373/flag_2343/flag_1569/flag_6622/flag_7171/flag_6887/flag_5133/flag_212/flag_3622/flag_3622/flag_5655/flag_9454/flag_2302/flag_5098/flag_3197/flag_1269/flag_8654/flag_9059`
  
- **FLAG**: `CIT{you_believed_in_me!}`

## Invoice
### **Challenge**:
Our intern strikes again! We told him to create an invoice for one of our sponsors, but he redacted all of the sponsors information so we cannot tell who we are sending it to. Can you recover the sponsor's name for us?

### **Solution**:
- Run the file in **Word** or anything similar and then then undo the highlight over redacted parts which reveals the flag. This is probably the easiest solution if you aren't using command-line tools.

- **FLAG**: `CIT{Sir_Swaggy}`
