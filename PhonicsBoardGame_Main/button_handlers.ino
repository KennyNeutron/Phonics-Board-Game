void testButton() {
  for (int i = 0; i <= 30; i++) {
    if (status_PushButton[i]) {
      Serial.println("Button #" + String(i) + " is pressed");
    }
  }
}

bool btn_Pressed() {
  btn_Main();
  for (int x = 0 ; x <= 30 ; x++) {
    if (status_PushButton[x]) {
      pressed_button = x;
    }
  }
  if (pressed_button != 0) {
    return true;
  } else {
    return false;
  }
}

bool btn_NoPress() {
  btn_Main();
  uint8_t  noPressCount = 0;
  for (int a = 0; a <= 30; a++) {
    if (status_PushButton[a]) {
      noPressCount++;
    }
  }

  if (noPressCount == 0) {
    return true;
  } else {
    return false;
  }
}
