// This simple sketch allows you to put your computer to sleep. 
// Using the Arudino Leonardo, a few force sensors and a push button.

// WARNING -- This is more of a rear naked choke then a sleeper hold...bummer...


#include "Keyboard.h"

char controlKey = KEY_LEFT_CTRL;
char functionKey = KEY_F2;
char downArrowKey = KEY_DOWN_ARROW;
char enterKey = KEY_RETURN;

const int buttonPin = 4;      // input pin for pushbutton
const int foreheadPin = 5;      // input pin for forehead force sensor
const int neckPin = 6;      // input pin for neck force sensor

void setup() {
  // define all inputs:
  pinMode(buttonPin, INPUT);
  pinMode(foreheadPin, INPUT);
  pinMode(neckPin, INPUT);
  
  // initialize control over the keyboard with Arduino:
  Keyboard.begin();
  Serial.begin(9600);
}

void loop() {
  // read the pushbutton:
  int buttonState = digitalRead(buttonPin);
  int foreheadPin = digitalRead(foreheadPin);
  int neckPin = digitalRead(neckPin);
  
  Serial.println(buttonPin);
  Serial.println(foreheadPin);
  Serial.println(neckPin);
  
  // if the button is pressed and both force sensors read higher than x then put computer to sleep
  if ((buttonState == HIGH) && (foreheadPin >= 150) && (neckPin >= 200))
  {
    Serial.println("John Ceeeeeennnaaaaaa");
    delay(5042);      // It takes me 5042 ms to put someone to sleep. How many does it take you?

    // Open Apple Menu
    Keyboard.press(controlKey);
    delay(50);
    Keyboard.press(functionKey);
    delay(50);
    // Press down arrow 7 times to get to 'Sleep' in the Apple Menu
    Keyboard.press(downArrowKey);
    Keyboard.press(downArrowKey);
    Keyboard.press(downArrowKey);
    Keyboard.press(downArrowKey);
    Keyboard.press(downArrowKey);
    Keyboard.press(downArrowKey);
    Keyboard.press(downArrowKey);
    delay(50);
    // Press the "Enter" or "Return" key to perform function
    Keyboard.press(enterKey);
    delay(250);
    Keyboard.releaseAll();
   }

  else
  {
    Serial.println("Is that all you've got");
    delay(2000);
    return;
  }
}


 
