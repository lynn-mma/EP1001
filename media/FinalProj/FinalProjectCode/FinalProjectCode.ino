#include "UsbKeyboard.h"

#define F1 17
#define F2 19
#define F3 6
#define F4 5
#define F5 16
#define F6 18
#define F7 8
#define F8 7
#define F9 15
#define F10 14
#define F11 10
#define F12 9

void setup() {
  pinMode(F1, INPUT);
  digitalWrite(F1, HIGH);

  pinMode(F2, INPUT);
  digitalWrite(F2, HIGH);

  pinMode(F3, INPUT);
  digitalWrite(F3, HIGH);

  pinMode(F4, INPUT);
  digitalWrite(F4, HIGH);

  pinMode(F5, INPUT);
  digitalWrite(F5, HIGH);

  pinMode(F6, INPUT);
  digitalWrite(F6, HIGH);

  pinMode(F7, INPUT);
  digitalWrite(F7, HIGH);

  pinMode(F8, INPUT);
  digitalWrite(F8, HIGH);

  pinMode(F9, INPUT);
  digitalWrite(F9, HIGH);

  pinMode(F10, INPUT);
  digitalWrite(F10, HIGH);

  pinMode(F11, INPUT);
  digitalWrite(F11, HIGH);

  pinMode(F12, INPUT);
  digitalWrite(F12, HIGH);
}


void loop() {
  
  UsbKeyboard.update();

  if (digitalRead(F1) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F1);
    delay(200);
   }

   if (digitalRead(F2) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F2);
    delay(200);
   }

   if (digitalRead(F3) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F3);
    delay(200);
   }

   if (digitalRead(F4) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F4);
    delay(200);
   }

   if (digitalRead(F5) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F5);
    delay(200);
   }

   if (digitalRead(F6) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F6);
    delay(200);
   }

   if (digitalRead(F7) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F7);
    delay(200);
   }

   if (digitalRead(F8) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F8);
    delay(200);
   }

   if (digitalRead(F9) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F9);
    delay(200);
   }

   if (digitalRead(F10) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F10);
    delay(200);
   }

   if (digitalRead(F11) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F11);
    delay(200);
   }

   if (digitalRead(F12) == 0) {
    UsbKeyboard.sendKeyStroke(KEY_F12);
    delay(200);
   }

}
