# Sleeper Hold :sleeping:

An Arduino application that uses the Leonardo and a few force sensors hooked up to a manikin head that puts your computer to sleep. Ok so it's not really a sleeper hold, it's a kokina clutch but the name sleeper hold fit oh so well 👌

### Getting Started ☝️

First, you'll need to acquire a few hardware components.

* [1x Arduino Leonardo](https://www.sparkfun.com/products/11286) - The micro-controller that will house your code. We need to use this specific model because it's one of the only Arduino’s that can mimic keyboard behavior out of the box
* [2x Force Pressure Sensor](https://www.sparkfun.com/products/11207) - To simulate the force of the kokina clutch (sleeper hold)
* [1x Push Button (optional)](https://www.sparkfun.com/products/10439) - Another form of validation and to simulate the actual wrestling hold
* [10x Jumper Wires](https://www.sparkfun.com/products/9194) - Used to connect hardware components
* [1x Manikin Head](https://www.amazon.com/Wrisky-Styrofoam-Mannequin-Manikin-Glasses/dp/B01HUVPXIK/ref=sr_1_sc_2?s=arts-crafts&ie=UTF8&qid=1480269767&sr=1-2-spell&keywords=male+manakin+head) - To mimic the human head

### Before You Assemble ✋

The action performed by standard function keys varies depending on the app you're using, or depending on the keyboard shortcuts listed in the Keyboard & Mouse pane of System Preferences. By default, pressing one of these keys performs the special feature indicated by the icon printed on the key. For example, pressing the keys with speaker icons adjusts the volume. If you want to use one of these keys as a standard function key, hold the Fn key (usually in the lower-left corner of the keyboard) while pressing the function key. For example, pressing Fn-F10 (speaker icon) performs the function assigned to the F10 key instead of toggling mute on or off.

** If you're using a mac **

If you prefer the top row of keys to always behave as standard function keys without holding the Fn key:

* Choose System Preferences from the Apple menu.
* Click Keyboard.
* Click the Keyboard tab if it's not already highlighted.
* Select "Use all F1, F2, etc. keys as standard function keys"

** If you're using a PC (most modern) **

* Turn on the computer.
* Press the F10 key to enter the BIOS setup window.
* Use the arrow keys to navigate to the System Configuration option.
* Enter the Action Keys Mode option, and then press the enter key to display the Enable / Disable menu.

With this option enabled, the keys on the top row act as standard function keys (F1–F12). To use a feature indicated by the icon printed on a key, hold Fn while pressing the key.

### Installing Software 💻

Make sure that you've got the [Arduino IDE](https://www.arduino.cc/en/Main/Software) installed on your machine because without it, this project is useless.

Next you'll need to keyboard.h code installed in the head (very top) of your .ino Arduino file. It should already be in the code on the file in this repository, but just incase you're doing it on your own.

```
#include "Keyboard.h"
```

It's pretty simple. You download the Arduino code file in the ``` sleeperHold ``` directory and it should work from there.

### Hardware (Assembly) 🔌

I've included a [Fritzing](http://fritzing.org/home/) file to the ``` hardware ``` folder in this repository. If you don't feel like installing Fritzing on your machine, just reference this image for building out your circuit.

### Now, Put Your Computer to Sleep 🎉

￼![magic .gif from Giphy](http://i.giphy.com/11mZ7LKLGhkwaA.gif)

### Contributing 🙏

Please read CONTRIBUTING.md for details on our code of conduct, and the process for submitting pull requests to us.
The keyboard.h Arduino library allows an Arduino board with USB capabilities to act as a Keyboard. Being based on HID library you need to include "HID.h" in your sketch.

Copyright (c) Arduino LLC. All right reserved. This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.

## Authors :thumbsup:

* **Matt Reamer** - [Github](https://github.com/iamtheream) / [Portfolio](http://iamtheream.io)
