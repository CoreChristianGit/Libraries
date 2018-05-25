/*
 * myFirstLibrary.h - An introduction to library setup
 * Created by Christian @ Core Electronics on 11/05/18
 * Revision #2 - Removed pinBut for interrupt incorporation 
 */

#ifndef myFirstLibrary_h    //  This line checks to see if myFirstLibrary.h hasn't
                            //  been defined. If this is the case, the header file 
                            //  will continue to run until the final #endif command. 
                                                                
#define myFirstLibrary_h    //  This line defines the myFirstLibrary header file.

#include "Arduino.h"        //  This gives the library access to the standard Arduino
                            //  types and constants (unneccesary for sketches but
                            //  required for libraries).

class myFirstLibrary{       //  Where all functions, subroutines, classes, values etc. 
                            //  are defined in the header file.
                            
  public:                   //  Contents of the header file that are open for use from
                            //  a sketch.
                   
    myFirstLibrary(int pinOne, int pinTwo, int pinThree);
    void on();              
    void off();
    void flash();

  private:                  //  Contents of the header file that are only accessible
                            //  from the class itself.
    int _pinOne, _pinTwo, _pinThree;
                            //  The underscore is a common convention (like camel case)
                            //  that lets a user know the variables are private
};

#endif                      //  Terminates the #ifndef call at the start of the function 