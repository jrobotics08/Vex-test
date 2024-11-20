/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       BSSD8                                                     */
/*    Created:      11/20/2024, 3:58:23 PM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include "iostream"
using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here


int main() {

    Brain.Screen.printAt( 10, 50, "Hello V5" );

   
    while(1) {
        
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
