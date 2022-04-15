# ElevenKey firmware

Firmware for macropad PCB made by [Ryan Bates](https://www.tindie.com/products/ryanbatesrbg/pcb-for-programmable-macro-keyboard-encoders-v2/)

## Features

The firmware is for an minimal and opinionated configuration of the PCB

* Vial support
  * Allows programming all keys and encoders with Vial UI
* Via support
  * Default firmware has nothing mapped so via is required at the moment
  * 2 Encoders
    * Left encoder adjusts volume on layer 1
    * Right encoder scrolls up/down on layer 1
    * Right encoder scrolls left/right on layer 2

## Usage

These instructions assume you have [QMK CLI](https://github.com/qmk/qmk_cli) installed with the `qmk_firmware` directory in your home directory.

#### 1. Symlink this repo

```
ln -sf /path/to/this/repo/ryanbates ~/qmk_firmware/keyboards/ryanbates
```

#### 2. Compile and flash

```
qmk compile -kb ryanbates/elevenkey -km default
qmk flash -kb ryanbates/elevenkey -km default
```
