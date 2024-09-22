This document outlines the build process for my custom Dactyl keyboard featuring function keys (F-keys, 6x6). Each side of the keyboard is designed to function independently, meaning the left and right sides are not physically connected. Instead, both sides are connected to a USB hub, which interfaces with the PC.

Please note, a key drawback of this separate design is the inability to activate certain keys across sides, such as using the FN key located on the opposite half. However, for other functional keys like SHIFT or CTRL, it is possible to utilize the left controller's CTRL key and the right controller's function keys, such as F keys. Beyond this, I am not aware of any other significant limitations.

The controller used is an Arduino Pro Micro. The firmware is configured and compiled in a Linux virtual machine (VM) using the QMK command-line interface (CLI). Flashing the hex files to the controllers is done on Windows using QMK Toolbox, with the auto-flash feature triggered by quickly bridging the GND and RST pins on the Arduino twice.

The first step of the build involved printing the Dactyl cases. The case files were sourced from the following repository: https://github.com/tshort/dactyl-keyboard/tree/master/things.

To simplify the process for others, I will upload the necessary files.
 
 ![signal-2024-09-17-175458_006](https://github.com/user-attachments/assets/9249fedb-abbc-4d97-89d9-916171a78a00)

For this project, I used 1N4148 diodes. The next step in the process involves considerable finishing work, including sanding the Dactyl case and installing the mechanical switches. Once the switches are in place, I soldered all the columns using a thicker wire. The choice of thick wire was intentional, as some switches were slightly loose and could easily pop out. This issue likely arose due to minor imperfections in my 3D print and excessive sanding during finishing.

The columns are wired in parallel using the thick wire, while the rows are wired in parallel with diodes connected to each mechanical switch arm.

![signal-2024-09-18-161415_00bbbbb3](https://github.com/user-attachments/assets/7e662779-24f8-4858-b7f0-814b07872dc5)
![signal-2024-09-18-161415_002aaaaa](https://github.com/user-attachments/assets/99649dbb-5fcc-41eb-84f5-9de79a145ab0)

![signal-2024-09-17-175458_004](https://github.com/user-attachments/assets/a2afb7a9-cb3f-4824-9367-434ddf78ab4d)

