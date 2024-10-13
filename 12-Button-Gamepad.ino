//  12 button Gamepad
//  inspired by Stuart Brand (JamHamster)https://github.com/jamhamster
//  13/10/2024
//  For Arduino Leonardo and Arduino Micro only.
//  Based with thanks on the Gamepad Example code by Matthew Heironimus (https://github.com/MHeironimus)
//  Uses the excellent Joystick library here: https://github.com/MHeironimus/ArduinoJoystickLibrary

//Set up the conditions and environment for the Arduino Joystick Library. Sets an 11 button GamePad 
int ButtonCount=(12);

#include <Joystick.h>
  
  
  Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,ButtonCount,0,1,1,0,0,0,0,0,0,0,0,0);
  void setup() 
  {Joystick.begin();

//Sweeps through Arduino pins and sets all to Input Pullup
  for (int PSweep=0; PSweep<22; PSweep++){pinMode(PSweep, INPUT_PULLUP);}

//Sweeps through Gamepad buttons and sets all to 0
  for (int BSweep=0; BSweep<22; BSweep++){Joystick.setButton(BSweep, 0);}

//Configures Gamepad Ranges
  Joystick.setXAxisRange(-1, 1);
  Joystick.setYAxisRange(-1, 1);}

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
    Joystick.setButton(9,(!digitalRead(14)));
    Joystick.setButton(10,(!digitalRead(15)));
    Joystick.setButton(11,(!digitalRead(16)));
  delay(10);
  }