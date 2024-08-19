# ProMicroMacropad

![ProMicroMacropad](https://github.com/YeetTheAnson/ProMicroMacropad/raw/main/1.png)
![ProMicroMacropad](https://github.com/YeetTheAnson/ProMicroMacropad/raw/main/2.png)


https://github.com/user-attachments/assets/f9dcee47-7e05-4909-bbb2-16fe19b6d703


## Overview

**ProMicroMacropad** is a customizable and programmable macropad built using the Arduino Pro Micro. It's an easy project for new coders to learn programming. The programmable macropad has a a rotary encoder, an OLED display, a touch-sensitive button, and 16 physical buttons that can be programmed to perform different macros.

## Features

### 1. **Rotary Encoder**
The rotary encoder allows you to navigate the menu on the OLED screen by twisting and clicking.

### 2. **OLED Display**
The OLED is programmable and can display anything from curernt time to status of keys, or custom messages.

### 3. **Touch-Sensitive Button**
The touch sensitive buttons are programmeable, and can act as modifier keys for the 16-key keypad

### 4. **16 Programmable Buttons**
The macropad has 16 physical buttons, each of which can be programmed to send macros.

## 3D Model

You can view and interact with the 3D model of the ProMicroMacropad [here](https://www.flux.ai/yeettheanson/promicromacro?editor=pcb_3d).


## Getting Started

### Prerequisites

Before you begin, ensure you have the following:
- Arduino IDE installed on your computer.
- Arduino Pro Micro board.

### Installation

### Install the Required Libraries:

Open the Arduino IDE and go to **Sketch > Include Library > Manage Libraries...**. In the Library Manager, search for the following libraries:

- **Keyboard**
- **Mouse**

### Using the Keyboard and Mouse Libraries

The **Keyboard** and **Mouse** are libraries for the Arduino pro micro to act as HID devices. Below are some common functions you can use:

#### Keyboard Functions:
- **`Keyboard.print()`**: Sends a string of characters. For example, `Keyboard.print("Hello, world!");` will type out the phrase "Hello, world!".
- **`Keyboard.press()`**:  Holds down a key. It requires a key code, such as `Keyboard.press(KEY_LEFT_CTRL);` to press the left control key.
- **`Keyboard.releaseAll()`**: Releases all the pressed keys. 

#### Mouse Functions:
- **`Mouse.move(x, y)`**: Moves the mouse cursor by x and y units relative to the current position.
- **`Mouse.click()`**: Simulates a mouse click.
- **`Mouse.press()`** and **`Mouse.release()`**: Simulates mouse button press and release.

### Button Functions in the Example Code

In the provided example code, each button on the macropad is assigned a specific function. Here’s a summary of what each button does:

- **Button 1**: Scroll down
- **Button 2**: Scroll up
- **Button 3**: Alt + Tab (Switches between open applications)
- **Button 4**: Alt + F4 (Closes the current window)
- **Button 5**: Opens Task Manager
- **Button 6**: Takes a screenshot with the Snipping Tool
- **Button 7**: Ctrl + A (Selects all text)
- **Button 8**: Ctrl + C (Copies selected text)
- **Button 9**: Ctrl + V (Pastes copied text)
- **Button 10**: Types in a frequently used username
- **Button 11**: Types in a frequently used password
- **Button 12**: Types in a frequently used phone number
- **Button 13**: Opens the first app in the taskbar
- **Button 14**: Opens the second app in the taskbar
- **Button 15**: Opens the third app in the taskbar
- **Button 16**: Plays a Rickroll ;p


