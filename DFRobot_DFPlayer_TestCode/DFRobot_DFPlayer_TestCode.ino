/*
  ----------------------------------------------------------------------
  Project: Phonics Board Game - DFPlayer Mini Integration
  Purpose: Play MP3 files using DFPlayer Mini for phonics sounds.

  Board: Arduino Uno (or compatible)
  Author: KennyNeutron
  License: GNU Lesser General Public License
  Date: May 2025

  Description:
    Plays MP3 files from DFPlayer Mini using SoftwareSerial.
    Automatically plays next file every 3 seconds.

  ----------------------------------------------------------------------
*/

#include <SoftwareSerial.h>
#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

// Use SoftwareSerial for DFPlayer communication
SoftwareSerial FPSerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  FPSerial.begin(9600);
  Serial.begin(115200);

  Serial.println(F("Initializing DFPlayer..."));
  if (!myDFPlayer.begin(FPSerial, true, true)) {
    Serial.println(F("DFPlayer init failed!"));
    while (true) delay(0);
  }

  myDFPlayer.volume(25); // Set volume (0–30)
  Serial.println(F("DFPlayer Mini is ready."));
  delay(1000);
  Serial.println("Playing 05.mp3");
  myDFPlayer.play(5); // Plays 005.mp3
}

void loop() {
}
