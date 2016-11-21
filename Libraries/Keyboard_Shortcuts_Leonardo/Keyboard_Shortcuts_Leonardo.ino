/*
 * Keyboard shortcuts - Leonardo code - RECEIVER
 * John Jurotte 2014 
 */
 
int debug = 0; // set this to 1 to output to serial port for testing
char ctrlKey = KEY_LEFT_CTRL; // get the codes for these from here http://arduino.cc/en/Reference/KeyboardModifiers
char altKey = KEY_LEFT_ALT;


void setup()                    
{
  Serial.begin(9600);  // this port talks to the PC via the Leonardo's virtual serial port
  Serial1.begin(9600);  // this port listens to the Pro Mini
  Keyboard.begin();
}

void loop()                    
{
  while (Serial1.available() > 0)
  {
    int buttondata = Serial1.parseInt();
    if (buttondata == 11){
      if (debug)                     // If debug is set to 1 above, then no keystrokes will be sent to the keyboard. Used to test that you are receiving the keypresses from the Pro Mini
      {  
        Serial.println("Button 1 Pressed");
      } 
      else 
      {
        buttondata = 0;
        Keyboard.press(ctrlKey);    // Control C to copy highlighted text, images, files to clipboard
        Keyboard.write('c');
        Keyboard.releaseAll();      // As it says, releases all keys
        delay(100);                 // delay is so that you don't repeat the key if your finger is held on for too long
      }
    }


    if (buttondata == 12){
      if (debug){
        Serial.println("Button 2 Pressed");
      } 
      else {
        buttondata = 0;
        Keyboard.press(ctrlKey);    // Control V to paste item in clipboard
        Keyboard.write('v');
        Keyboard.releaseAll();
        delay(100);
      }
    }
    if (buttondata == 13){
      if (debug){
        Serial.println("Button 3 Pressed");
      } 
      else {
        buttondata = 0;
        Keyboard.print("Regards");    // This could be any text that you would type a lot, in this case it is a signature
        Keyboard.write(0xB0);         // Return (enter) key
        Keyboard.print("John Smith");
        Keyboard.releaseAll();
        delay(100);
      }
    }
    if (buttondata == 14){
      if (debug){
        Serial.println("Button 4 Pressed");
      } 
      else {
        buttondata = 0;
        Keyboard.press(altKey);    // Alt Tab to flick between different applications running
        Keyboard.write(0xB3);
        Keyboard.releaseAll();
        delay(50);
      }
    }
    if (buttondata == 15){
      if (debug){
        Serial.println("Button 5 Pressed");
      } 
      else {
        buttondata = 0;
        Keyboard.press(ctrlKey);    // Used in Excel to move one worksheet to the left
        Keyboard.write(0xD3);
        Keyboard.releaseAll();
        delay(100);
      }
    }
    if (buttondata == 16){
      if (debug){
        Serial.println("Button 6 Pressed");
      } 
      else {
        buttondata = 0;
        Keyboard.press(ctrlKey);    // Used in Excel to move one worksheet to the right
        Keyboard.write(0xD6);
        Keyboard.releaseAll();
        delay(100);
      }
    }



  }
}

