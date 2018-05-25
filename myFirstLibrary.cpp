/*
 * myFirstLibrary.cpp - An introduction to library setup
 * Created by Christian @ Core Electronics on 11/05/18
 * Revision #2 - Removed pinBut so interrupts can be incorporated
 */

#include "Arduino.h"          //  Include the Arduino header file as
                              //  it isn't automatically included in
                              //  libraries.
                              
#include "myFirstLibrary.h"   //  Include the header file for the 
                              //  myFirstLibrary library.

myFirstLibrary::myFirstLibrary(int pinOne, int pinTwo, int pinThree){
                              //  Within here, the myFirstLibrary function
                              //  is defined for use. The '::' indicates that
                              //  this function is part of the myFirstLibrary
                              //  class.

                              //Here are the pinMode declarations.
  pinMode(pinOne, OUTPUT);
  pinMode(pinTwo, OUTPUT);
  pinMode(pinThree, OUTPUT);

                              //  The public (input) values are then saved 
                              //  in the corresponding private variables.
  _pinOne = pinOne;
  _pinTwo = pinTwo;
  _pinThree = pinThree; 
}

void myFirstLibrary::on(){
  digitalWrite(_pinOne, HIGH);
  digitalWrite(_pinTwo, HIGH);
  digitalWrite(_pinThree, HIGH);
}

void myFirstLibrary::off(){
  digitalWrite(_pinOne, LOW);
  digitalWrite(_pinTwo, LOW);
  digitalWrite(_pinThree, LOW);
}

void myFirstLibrary::flash(){
  digitalWrite(_pinOne, HIGH);
  digitalWrite(_pinTwo, HIGH);
  digitalWrite(_pinThree, HIGH);
  delay(250);
  digitalWrite(_pinOne, LOW);
  digitalWrite(_pinTwo, LOW);
  digitalWrite(_pinThree, LOW);
  delay(250);
  digitalWrite(_pinOne, HIGH);
  digitalWrite(_pinTwo, HIGH);
  digitalWrite(_pinThree, HIGH);
  delay(250);
  digitalWrite(_pinOne, LOW);
  digitalWrite(_pinTwo, LOW);
  digitalWrite(_pinThree, LOW);
  delay(250);
  digitalWrite(_pinOne, HIGH);
  digitalWrite(_pinTwo, HIGH);
  digitalWrite(_pinThree, HIGH);
  delay(250);
  digitalWrite(_pinOne, LOW);
  digitalWrite(_pinTwo, LOW);
  digitalWrite(_pinThree, LOW);
  delay(250);
  digitalWrite(_pinOne, HIGH);
  digitalWrite(_pinTwo, HIGH);
  digitalWrite(_pinThree, HIGH);
  delay(250);
  digitalWrite(_pinOne, LOW);
  digitalWrite(_pinTwo, LOW);
  digitalWrite(_pinThree, LOW);
  delay(250);
}
