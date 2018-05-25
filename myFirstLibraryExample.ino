/*  Name: myFirstLibraryExample
 *  Date Created: 23/05/2018
 *  Description: Demonstrates the use of the myFirstLibrary library methods
 *  Connections:
 *    - Potentiometer --> +5V, A0, GND (Right to left)
 *    - Push Button   --> D2, GND
 *    - Blue LED      --> D3, 330 Ohm Resistor --> GND
 *    - Green LED     --> D5, 330 Ohm Resistor --> GND
 *    - Red LED       --> D6, 330 Ohm Resistor --> GND
 */

//  Include relevant libraries
#include <myFirstLibrary.h>

//  Define Pin Assignments
const int potPin = A0;
const int butPin = 2;
const int bluePin = 3;
const int greenPin = 5;
const int redPin = 6;

//  Declare variables and constants
float potValue = 0;
int brightness = 255;
float analogToDigital = 1023;   //  The Arduino Uno R3 has a 10-bit ADC

//  Create an instance of the myFirstLibrary class called 'mySetup' 
myFirstLibrary mySetup(redPin, bluePin, greenPin);

void setup(){
  pinMode(butPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(){
  //  Initialise the potValue variable which is a scaled value from 0-1 or 0%-100%
  potValue = analogRead(potPin) / analogToDigital;
  Serial.print("The A0 pin is reading ");
  Serial.print(potValue);
  Serial.println(" * 5 Volts");
      
  if(potValue < 0.4){
    //  This is a writing a pwm signal to the 3 LEDs
    analogWrite(redPin, brightness * potValue);
    analogWrite(greenPin, brightness * potValue);
    analogWrite(bluePin, brightness * potValue);
  } else if (potValue < 0.8){
    //  Run the 'on' method 
    mySetup.on();
  } else {
    //  Run the 'flash' method
    mySetup.flash();
  }
  
  while(!digitalRead(butPin)){
    //  Run the 'off' method
    mySetup.off();
  }
  
  delay(100);
}
