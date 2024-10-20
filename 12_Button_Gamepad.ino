//  12 button Gamepad
//  inspired by Stuart Brand (JamHamster)https://github.com/jamhamster
//  Inspired by Matthey Heironimus test sketch JoystickButton
//  13/10/2024 WAB
//  For Arduino Leonardo and Arduino Micro only.
//  Based with thanks on the Gamepad Example code by Matthew Heironimus (https://github.com/MHeironimus)
//  Uses the excellent Joystick library here: https://github.com/MHeironimus/ArduinoJoystickLibrary
//--------------------------------------------------------------------

#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  12, 0,                  // Button Count, Hat Switch Count
  false, false, false,     // X and Y, but no Z Axis
  false, false, false,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering

  void setup() 
  {Joystick.begin();

//Sweeps through Arduino pins and sets all to Input Pullup
  for (int PSweep=0; PSweep<22; PSweep++){pinMode(PSweep, INPUT_PULLUP);}

//Sweeps through Gamepad buttons and sets all to 0
  for (int BSweep=0; BSweep<22; BSweep++){Joystick.setButton(BSweep, 0);}

}

//Start of main loop
  void loop() {
        
//Iterates through Pins and translates straight to button presses (Joystick ButtonNumber, Arduino Pin)
//Change this to alter/add/remove button assignments. 
    Joystick.setButton(0,(!digitalRead(2)));
    Joystick.setButton(1,(!digitalRead(3)));
    Joystick.setButton(2,(!digitalRead(4)));
    Joystick.setButton(3,(!digitalRead(5)));
    Joystick.setButton(4,(!digitalRead(6)));
    Joystick.setButton(5,(!digitalRead(7)));
    Joystick.setButton(6,(!digitalRead(8)));
    Joystick.setButton(7,(!digitalRead(9)));
    Joystick.setButton(8,(!digitalRead(10)));
    Joystick.setButton(9,(!digitalRead(16)));
    Joystick.setButton(10,(!digitalRead(14)));
    Joystick.setButton(11,(!digitalRead(15)));
  delay(10);
  }