# Misc
## What's that one movie?
#### **Challenge**:
You know that one movie with the boy from the pool? I remember I used to eat Cereal when I'd watch that movie. Good times.

Go to 58:38 and tell me what the poster on the wall says.

#### **Solution**:
- In this challenge, I mention "boy from the pool" which is a reference to the movie *The Pool Boys* (2009) which features Matthew Lillard. The other part of the challenge mentions "Cereal" which is referencing Lillard's character, Cereal, in *Hackers* (1995). Once you go to 58:38 in the movie, you see the poster on the wall. 

- **FLAG**: `CIT{inter_stellar_groove_power}`

## Tables Tables Tables
#### **Challenge**:
In the realm where echoes of binary whisper, Amidst the void where zeros and ones shimmer. In cryptic dance, symbols intertwine, A silent language, beyond the confines of time.

Within the matrix, where patterns unfurl, Inscribed in digits, a cosmic swirl. A symphony of codes, in spectral hues, The unseen tapestry, where truth imbues.

Through labyrinthine corridors, we tread, In search of meanings, in words unsaid. A ciphered verse, in shadows cast, In the alchemy of numbers, secrets amassed.

Each stroke of key, a quantum leap, In the quantum dance, where dreams seep. Encoded echoes, in pixelated trance, A cosmic ballet, in the cosmic expanse.

Yet amidst this cryptic dance of light, Lies a quest, in the depths of night. A file named "flag.txt," a beacon bright, Guiding_seekers_through_the_cryptic_flight.

In the labyrinth of codes, where shadows roam, The flag awaits, in its hidden home. Unlock_the_secrets, unravel the maze, And_claim_the_prize, in the_cyberspace_haze.

So let us delve into the depths unknown, In the search for the flag, where realms are shown. For_in_the_cryptic_verse, we find our grace, In the enigmatic embrace, of cyberspace.

#### **Solution**:
- The challenge description was a whole bunch of GPT yapping about the challenge which kind of dropped some loose hints on what was needed. All that was needed for this challenge was an ASCII table. You just needed to translate the provided flag.txt file using both decimal & hex from the ASCII table and you would arrive at the decoded flag.

- **FLAG**: `CIT{T4bl35_0f_4sc11}`

## The numbers Mason!
#### **Challenge**:
I leave you with this ciphertext:

43qazxd 567tfc 098uhbjkl

Have fun!

#### **Solution**:
- When you type out the ciphertext, `43qazxd 567tfc 098uhbjkl` on your keyboard, if you just trace the keystrokes, it spells out `CTF`.

- I went into naming this knowing it was a COD reference, but I thought it was funny. However, it drove some people crazy thinking they had to pick COD back up again and translate it in game.

- **FLAG**: `CIT{CTF}`

## Data Blocks
#### **Challenge**:
They say something about data coming in "blocks." Whatever that means. I was thinking Minecraft but idk.. You go find out!

1.20.4

#### **Solution**:
- This one was fun to create.

- The Minecraft world was a replica of Midtown Manhattan. We plastered a bunch of signs in-game around a ton of buildings with an MD5 hash that was`97f67eb8d52ce164e106263e86eb052d`. For example, one of them was right as you walked into the cafeteria of Grand Central Terminal. Once you found it, there was a plug-in I created the night before that acted like **Hashcat** and "cracked" the hash for you. I set it up to basically use local/current time for the `time.started/time.estimated` fields to make it seem more realistic. There was a slight 10 second delay too I implemented to make it seem like we really put **Hashcat** in Minecraft for the challenge.

- You would then use the command `/flag 97f67eb8d52ce164e106263e86eb052d` which would spit out fake **Hashcat** output in the chat. However, if you did `/flag` with any other argument, it would wait 10 seconds then it would kick you with the reason **"nah"** which we thought would be a nice touch.

- **FLAG**: `CIT{you_are_so_crafty!}`