# ErgoDonk Zero

![ErgoDonk Zero](https://i.imgur.com/nQYe2B7.jpeg)

ErgoDonk Zero is a 6×9+6 keys split ortholinear keyboard with encoder & solenoid
 support, hotswap sockets for MX or Choc v1 low profile switches, and uses the 
 RP2040 Zero MCU.

* Keyboard Maintainer: [Ryan Neff](https://github.com/JellyTitan)
* Hardware Supported: ErgoDonk Zero
* Hardware Availability: https://github.com/JellyTitan/ErgoDonk-Zero

Each half must be flashed separately with its correct handedness. Connect each half individually via USB and run the appropriate command:

    `qmk flash -kb ergodonk_zero -km default -bl uf2-split-left`   # flash the left half
    `qmk flash -kb ergodonk_zero -km default -bl uf2-split-right`  # flash the right half

This only needs to be done once per half — the handedness is stored in EEPROM and persists across firmware updates. After the initial flash, either half can be connected to USB.

To re-flash without changing handedness:

    `qmk flash -kb ergodonk_zero -km default`

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key (Escape) for left hand, or the top right key (Delete) for the right hand, and plug in the keyboard
* **Physical reset button**: Hold down the BOOT button on the Zero while plugging the keyboard.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
