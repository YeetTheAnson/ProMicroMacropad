#include <Arduino.h>
#include <Mouse.h>
#include <Keyboard.h>

void setup() {
  Serial.begin(9600);
  Keyboard.begin();
  Mouse.begin();
  //LOL, idk how to exclude some pins if i use for loop
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(18, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(2) == LOW) { //Scroll down
    Mouse.move(0, 0, -1);
    delay(25);
  }

  else if (digitalRead(3) == LOW) {// scroll up
    Mouse.move(0, 0, 1);
    delay(25);
  }
  else if (digitalRead(4) == LOW) { //alt tab
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_TAB);
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(5) == LOW) { // alt 4
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(6) == LOW) { // open task manager
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_ESC);
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(7) == LOW) { // screenshot with snipping tool
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('s');
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(8) == LOW) { // ctrl a
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('a');
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(9) == LOW) { //ctrl c
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(21) == LOW) { //ctrl v
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(16) == LOW) { //So that you don't have to constantly type in your username during login
    Keyboard.print("Frequently used username");
    delay(100);
  }
  else if (digitalRead(14) == LOW) { //So that you don't have to constantly type in your password during login
    Keyboard.print("Frequently used password");
    delay(100);
  }
  else if (digitalRead(15) == LOW) { //So that you don't have to constantly type in your phone number during login
    Keyboard.print("Frequently used phonenumber");
    delay(100);
  }
  else if (digitalRead(18) == LOW) { //open first pinned taskbar app
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('1');
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(19) == LOW) { //open second pinned taskbar app
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('2');
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(20) == LOW) { //open third pinned taskbar app
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('3');
    delay(10);
    Keyboard.releaseAll();
    delay(100);
  }
  else if (digitalRead(10) == LOW) { //Figure out what this does ;p
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(10);
    Keyboard.releaseAll();
    delay(125);
    Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    Keyboard.press(KEY_KP_ENTER);
    delay(10);
    Keyboard.releaseAll();
    delay(200);
  }
}

