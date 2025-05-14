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

#define LedPin 13

void setup() {
  pinMode(LedPin,OUTPUT);
}

void loop() {
  digitalWrite(LedPin, 1);
  delay(300);
  digitalWrite(LedPin, 0);
  delay(300);
}
