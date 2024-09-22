Warning: I use the german keyboard layout. You can still use this guide since creating your own keyboard mappings will be explained.

This document outlines the build process for my custom Dactyl keyboard featuring function keys (F-keys, 6x6). Each side of the keyboard is designed to function independently, meaning the left and right sides are not physically connected. Instead, both sides are connected to a USB hub, which interfaces with the PC.

Please note, a key drawback of this separate design is the inability to activate certain keys across sides, such as using the FN key located on the opposite half. However, for other functional keys like SHIFT or CTRL, it is possible to utilize the left controller's CTRL key and the right controller's function keys, such as F keys. Beyond this, I am not aware of any other significant limitations.

The controller used is an Arduino Pro Micro. The firmware is configured and compiled in a Linux virtual machine (VM) using the QMK command-line interface (CLI). Flashing the hex files to the controllers is done on Windows using QMK Toolbox, with the auto-flash feature triggered by quickly bridging the GND and RST pins on the Arduino twice.

The first step of the build involved printing the Dactyl cases. The case files were sourced from the following repository: https://github.com/tshort/dactyl-keyboard/tree/master/things.

To simplify the process for others, I will upload the necessary files.
 
 ![signal-2024-09-17-175458_006](https://github.com/user-attachments/assets/9249fedb-abbc-4d97-89d9-916171a78a00)

The next step in the process involves considerable finishing work, including sanding the Dactyl case and installing the mechanical switches. Once the switches are in place, I soldered all the columns using a thicker wire. The choice of thick wire was intentional, as some switches were slightly loose and could easily pop out. This issue likely arose due to minor imperfections in my 3D print and excessive sanding during finishing.

The columns are wired in parallel using the thick wire, while the rows are wired in parallel with diodes connected to each mechanical switch arm. For this project, I used 1N4148 diodes.

![signal-2024-09-18-161415_00bbbbb3](https://github.com/user-attachments/assets/7e662779-24f8-4858-b7f0-814b07872dc5)
![signal-2024-09-18-161415_002aaaaa](https://github.com/user-attachments/assets/99649dbb-5fcc-41eb-84f5-9de79a145ab0)

The next step was to connect each row to one side of the microcontroller and all columns to the other side of the microcontroller. For reference I used the following picture:  

![pro_micro_pinout](https://github.com/user-attachments/assets/0efcf84c-af2e-47da-9fc7-053093699865)

I also soldered a mechanical micro switch to the GND and RST pins. This switch is later secured into a recess on the outside of the case, allowing for easy reprogramming of the microcontroller with just two clicks of the button.

The following pins were used for the project:

        "cols": ["D4", "C6", "D7", "E6", "B4", "B5"],
        "rows": ["F5", "F6", "F7", "B1", "B3", "B2", "B6"]

The next step was to flash the firmware onto the keyboards. While flashing can be done directly using hex files, this approach may not work properly if the wiring differs slightly from the expected configuration.

To address this, I activated the debug option in the keyboard firmware (via Tools > HID Console). Debug information is then read by QMK Toolbox, which outputs the x and y coordinates of each key. This data can be used to adjust the key matrix in the keyboard.json file. After any changes to the configuration files, the firmware must be recompiled, and the microcontroller re-flashed.

To test the keyboard, I used the Key Tester tool in QMK Toolbox (Tools > Key Tester). Once all keys are mapped correctly, custom keyboard mappings can be created.

I created an Excel spreadsheet to assist with this process, which will later be used to generate C code. First, I entered all the keys on the left side and matched them to the corresponding keycodes on the right side. Because my key matrix is somewhat unconventional, the keycodes do not always align perfectly with those shown on the left. This is intentional, as wiring them differently could result in incorrect key mappings. It’s up to the user to either wire them correctly or adjust their matrix accordingly.

Once the key mappings are finalized, the following segment is copied:

![image](https://github.com/user-attachments/assets/9c070e7e-3258-4409-a61b-cd1b9cd71f92)

This is then pasted into Notepad++ for some formatting adjustments:

Replace \t with ,
Replace \r\n with ,\r\n
Remove any duplicate commas
I created a macro in Notepad++ to automate this process, so it takes just one click to convert the data. After that, the formatted data is copied into the keymap.c array.

Finally, compile the firmware, re-flash the microcontroller, and adjust the layout until you are satisfied with the result.

![signal-2024-09-17-175458_004](https://github.com/user-attachments/assets/a2afb7a9-cb3f-4824-9367-434ddf78ab4d)

