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

void setup() {
  Serial.begin(115200);
  Serial.println("System Start");

  btn_Setup();
  interrupt_setup();

}

void loop() {

  btn_Main();
  testButton();
}

void testButton() {
  for (int i = 0; i < 31; i++) {
    if (status_PushButton[i]) {
      Serial.println("Button #" + String(i) + " is pressed");
    }
  }
}
