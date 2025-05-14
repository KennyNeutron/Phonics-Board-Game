

void btn_Setup() {
  pinMode(btn_Out1, OUTPUT);
  pinMode(btn_Out2, OUTPUT);
  pinMode(btn_Out3, OUTPUT);
  pinMode(btn_Out4, OUTPUT);
  pinMode(btn_Out5, OUTPUT);

  pinMode(btn_In1, INPUT_PULLUP);
  pinMode(btn_In2, INPUT_PULLUP);
  pinMode(btn_In3, INPUT_PULLUP);
  pinMode(btn_In4, INPUT_PULLUP);
  pinMode(btn_In5, INPUT_PULLUP);
  pinMode(btn_In6, INPUT_PULLUP);
}


void btn_Main() {
  btn_Scan(scanCount);

  switch (scanCount) {
    case 1:
      if (!digitalRead(btn_In1)) {
        btn_SetStatus(1, 1);
      } else {
        btn_SetStatus(1, 0);
      }
      if (!digitalRead(btn_In2)) {
        btn_SetStatus(2, 1);
      } else {
        btn_SetStatus(2, 0);
      }
      if (!digitalRead(btn_In3)) {
        btn_SetStatus(3, 1);
      } else {
        btn_SetStatus(3, 0);
      }
      if (!digitalRead(btn_In4)) {
        btn_SetStatus(4, 1);
      } else {
        btn_SetStatus(4, 0);
      }
      if (!digitalRead(btn_In5)) {
        btn_SetStatus(5, 1);
      } else {
        btn_SetStatus(5, 0);
      }
      if (!digitalRead(btn_In6)) {
        btn_SetStatus(6, 1);
      } else {
        btn_SetStatus(6, 0);
      }
      break;
    case 2:
      if (!digitalRead(btn_In1)) {
        btn_SetStatus(7, 1);
      } else {
        btn_SetStatus(7, 0);
      }
      if (!digitalRead(btn_In2)) {
        btn_SetStatus(8, 1);
      } else {
        btn_SetStatus(8, 0);
      }
      if (!digitalRead(btn_In3)) {
        btn_SetStatus(9, 1);
      } else {
        btn_SetStatus(9, 0);
      }
      if (!digitalRead(btn_In4)) {
        btn_SetStatus(10, 1);
      } else {
        btn_SetStatus(10, 0);
      }
      if (!digitalRead(btn_In5)) {
        btn_SetStatus(11, 1);
      } else {
        btn_SetStatus(11, 0);
      }
      if (!digitalRead(btn_In6)) {
        btn_SetStatus(12, 1);
      } else {
        btn_SetStatus(12, 0);
      }
      break;
    case 3:
      if (!digitalRead(btn_In1)) {
        btn_SetStatus(13, 1);
      } else {
        btn_SetStatus(13, 0);
      }
      if (!digitalRead(btn_In2)) {
        btn_SetStatus(14, 1);
      } else {
        btn_SetStatus(14, 0);
      }
      if (!digitalRead(btn_In3)) {
        btn_SetStatus(15, 1);
      } else {
        btn_SetStatus(15, 0);
      }
      if (!digitalRead(btn_In4)) {
        btn_SetStatus(16, 1);
      } else {
        btn_SetStatus(16, 0);
      }
      if (!digitalRead(btn_In5)) {
        btn_SetStatus(17, 1);
      } else {
        btn_SetStatus(17, 0);
      }
      if (!digitalRead(btn_In6)) {
        btn_SetStatus(18, 1);
      } else {
        btn_SetStatus(18, 0);
      }
      break;

    case 4:
      if (!digitalRead(btn_In1)) {
        btn_SetStatus(19, 1);
      } else {
        btn_SetStatus(19, 0);
      }
      if (!digitalRead(btn_In2)) {
        btn_SetStatus(20, 1);
      } else {
        btn_SetStatus(20, 0);
      }
      if (!digitalRead(btn_In3)) {
        btn_SetStatus(21, 1);
      } else {
        btn_SetStatus(21, 0);
      }
      if (!digitalRead(btn_In4)) {
        btn_SetStatus(22, 1);
      } else {
        btn_SetStatus(22, 0);
      }
      if (!digitalRead(btn_In5)) {
        btn_SetStatus(23, 1);
      } else {
        btn_SetStatus(23, 0);
      }
      if (!digitalRead(btn_In6)) {
        btn_SetStatus(24, 1);
      } else {
        btn_SetStatus(24, 0);
      }
      break;
    case 5:
      if (!digitalRead(btn_In1)) {
        btn_SetStatus(25, 1);
      } else {
        btn_SetStatus(25, 0);
      }
      if (!digitalRead(btn_In2)) {
        btn_SetStatus(26, 1);
      } else {
        btn_SetStatus(26, 0);
      }
      if (!digitalRead(btn_In3)) {
        btn_SetStatus(27, 1);
      } else {
        btn_SetStatus(27, 0);
      }
      if (!digitalRead(btn_In4)) {
        btn_SetStatus(28, 1);
      } else {
        btn_SetStatus(28, 0);
      }
      if (!digitalRead(btn_In5)) {
        btn_SetStatus(29, 1);
      } else {
        btn_SetStatus(29, 0);
      }
      if (!digitalRead(btn_In6)) {
        btn_SetStatus(30, 1);
      } else {
        btn_SetStatus(30, 0);
      }
      break;
  }
}

void btn_SetStatus(uint8_t thisButton, bool thisStatus) {
  status_PushButton[thisButton] = thisStatus;
}

void btn_Scan(uint8_t thisScan) {
  switch (thisScan) {
    case 0:
      digitalWrite(btn_Out1, 1);
      digitalWrite(btn_Out2, 1);
      digitalWrite(btn_Out3, 1);
      digitalWrite(btn_Out4, 1);
      digitalWrite(btn_Out5, 1);
      break;
    case 1:
      digitalWrite(btn_Out1, 0);
      digitalWrite(btn_Out2, 1);
      digitalWrite(btn_Out3, 1);
      digitalWrite(btn_Out4, 1);
      digitalWrite(btn_Out5, 1);
      break;
    case 2:
      digitalWrite(btn_Out1, 1);
      digitalWrite(btn_Out2, 0);
      digitalWrite(btn_Out3, 1);
      digitalWrite(btn_Out4, 1);
      digitalWrite(btn_Out5, 1);
      break;
    case 3:
      digitalWrite(btn_Out1, 1);
      digitalWrite(btn_Out2, 1);
      digitalWrite(btn_Out3, 0);
      digitalWrite(btn_Out4, 1);
      digitalWrite(btn_Out5, 1);
      break;
    case 4:
      digitalWrite(btn_Out1, 1);
      digitalWrite(btn_Out2, 1);
      digitalWrite(btn_Out3, 1);
      digitalWrite(btn_Out4, 0);
      digitalWrite(btn_Out5, 1);
      break;
    case 5:
      digitalWrite(btn_Out1, 1);
      digitalWrite(btn_Out2, 1);
      digitalWrite(btn_Out3, 1);
      digitalWrite(btn_Out4, 1);
      digitalWrite(btn_Out5, 0);
      break;

  }

}
