Candle
-----------
GRBL controller application with G-Code visualizer written in Qt.

Supported functions:
* Controlling GRBL-based cnc-machine via console commands, buttons on form, numpad.
* Monitoring cnc-machine state.
* Loading, editing, saving and sending of G-code files to cnc-machine.
* Visualizing G-code files.

System requirements for running "Candle":
-------------------
* Windows/Linux/OSX x86
* CPU with SSE2 instruction set support
* Graphics card with OpenGL 2.0 support
* 120 MB free storage space

Build requirements:
------------------
Qt 5.4.2+ with MinGW/GCC compiler

Debian/Ubuntu: build-essential qtbase5-dev qtbase5-dev-tools qttools5-dev libqt5serialport5-dev

Downloads:
----------
Experimental versions:

* [Version 1.2b release](https://github.com/Denvi/Candle/releases/tag/v1.2b)


For GRBL v1.1 firmware

* Windows: [Candle_1.1.9_64bit.zip](https://github.com/mar0x/Candle/releases/download/v1.1.9/Candle_1.1.9_64bit.zip)
* Linux: [Candle-1.1.9-x86_64.AppImage](https://github.com/mar0x/Candle/releases/download/v1.1.9/Candle-1.1.9-x86_64.AppImage)
* OS X: [Candle-1.1.9.dmg](https://github.com/mar0x/Candle/releases/download/v1.1.9/Candle-1.1.9.dmg)

(for GRBL v0.9 and below use Candle 1.0)

Before creating new issue:
------
Candle works with CNC controlled by GRBL firmware, many problems can be solved by using proper version of GRBL, using proper configuration.

Please read GRBL wiki: 
- GRBL v0.9-: https://github.com/grbl/grbl/wiki
- GRBL v1.1: https://github.com/gnea/grbl/wiki

"Candle" main window:
![screenshot](/screenshots/screenshot_heightmap_original.png)
