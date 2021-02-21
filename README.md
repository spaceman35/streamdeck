# streamdeck
I wanted to make a streamdeck for a friend's Twitch channel, so I made a streamdeck I found on thingiverse. It was a huge pain in the butt, and the wiring inside was horrendous, so I wanted to give it another go with cleaner PCB internals. This is also a pretty basic project to get me accostomed to designing PCBs before moving on to some other projects I have in mind. There are a boatload of macro keyboards out there, so I got inspiration from a few, primarily the mini macro keyboard here: http://www.retrobuiltgames.com/the-build-page/macro-keyboard-v2-0/macro-keyboard-mini-v1-0/. 

The original streamdeck required some OBS plugins to work, but for v1.0 on, I want it to work with QMK and I'm going to integrate it with streamlabs using Lioranboard, an open source stream deck software. I'll make one for myself too for basic macro needs, but the primary intent is to be used on a twitch channel instead of an expensive elgato streamdeck. 

The v1.0 PCB is being printed right now via JLCPCB, so once they're back and working, I'll update this readme.


### Bill Of Materials

- Cherry MX switches x14
- 7-pin rotary encoder x2
- 1n4148 diodes x16
- Arduino Pro Micro clone (ATmega32u4)
- 6mm pushbutton switch (for resetting)
- 3mm LEDs x3 (+ resistors)