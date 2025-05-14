/*
  ----------------------------------------------------------------------
  Project: Phonics Board Game
  Purpose: Prevent early childhood reading illiteracy through a
           phonics-based interactive board game powered by Arduino.

  Author:
  Date: 05-14-2025
  Board: Arduino Uno
  License: MIT

  Description:
    This code controls the core logic of the Phonics Board Game,
    enabling sound playback, letter recognition, and interactive
    responses using buttons, LEDs, or sensors.

  ----------------------------------------------------------------------
*/
#include <SoftwareSerial.h>
#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

// Use SoftwareSerial for DFPlayer communication
SoftwareSerial FPSerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

#define btn_Out1 6
#define btn_Out2 5
#define btn_Out3 4
#define btn_Out4 3
#define btn_Out5 2

#define btn_In1 7
#define btn_In2 8
#define btn_In3 9
#define btn_In4 12
#define btn_In5 13
#define btn_In6 A0

bool status_PushButton[32];
uint8_t scanCount = 1;
uint8_t pressed_button = 0;


void setup() {
  Serial.begin(115200);
  Serial.println("System Start");
  FPSerial.begin(9600);
  Serial.println(F("Initializing DFPlayer..."));
  if (!myDFPlayer.begin(FPSerial, true, true)) {
    Serial.println(F("DFPlayer init failed!"));
    while (true) delay(0);
  }

  myDFPlayer.volume(25); // Set volume (0–30)
  Serial.println(F("DFPlayer Mini is ready."));

  btn_Setup();
  interrupt_setup();

}

void loop() {

  if (btn_Pressed()) {
    Serial.print("a button is pressed: ");
    Serial.println("button #" + String(pressed_button));
    delay(100);
    while (!btn_NoPress());
    char thisBuffer[40];
    sprintf(thisBuffer, "Now Playing: %03d.mp3", pressed_button);
    Serial.println(thisBuffer);
    myDFPlayer.play(pressed_button); // Plays mp3 corresponding to button # pressed
    sprintf(thisBuffer, "Finished Playing %03d.mp3", pressed_button);
    Serial.println(thisBuffer);
    pressed_button = 0;
  }

}
