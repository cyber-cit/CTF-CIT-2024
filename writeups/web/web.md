# Web
## Intern Retaliation Arc
### **Challenge**:
So it seems like our intern got a little pissed off we bossed him around and he pwned our website and is now holding us for ransom. We didn't have the budget for backups so we're kind of screwed.

I remember one of our developers had a page he was using to test some backend stuff. Something about finding "bugs" in the cloud? Not really sure what he meant as clouds don't have bugs inside of them. Weird.

Check it out and see if you can recover anything that might let us back in!

### **Solution**:
Starting off by saying I have no clue how to make web challenges so don't crucify me for this. `Web/Intern Retaliation Arc` was made the night before I'm not even kidding.

- There were a few solutions I saw for this one. One of them was: `/login?debug=true&info=flags['flag']` which I used. The goal here was to have folks enumerate directories on the website provided. From there, they would of course discover `/login`. Next, you had to discover parameters. Challenge description mentions "bugs" which some understood as potentially having to do something with `debug` which was correct. From there it was just finding out how to make it evaluate and spit out the flag.

- **FLAG**: `CIT{d3bug_m3_s0m3_m0r3!}`

## I can't see it
### **Challenge**:
I can't see it. Can you?

### **Solution**:
- Fairly straightforward once you get hit with the redirect. Disable redirect in your browser and have fun!

- **FLAG**: `CIT{n0W_you_C@n_s55_me}`
