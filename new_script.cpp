// VEX V5 C++ Project with Competition Template
#include "vex.h"
using namespace vex;

//#region config_globals
vex::brain Brain;
vex::motor motor_l1(vex::PORT20, vex::gearSetting::ratio18_1, false);
vex::motor motor_r1(vex::PORT11, vex::gearSetting::ratio18_1, true);
vex::motor motor_l2(vex::PORT10, vex::gearSetting::ratio18_1, false);
vex::motor motor_r2(vex::PORT1, vex::gearSetting::ratio18_1, true);
vex::motor motor_as1(vex::PORT9, vex::gearSetting::ratio36_1, false);
vex::motor motor_as2(vex::PORT2, vex::gearSetting::ratio36_1, true);
vex::motor motor_ah1(vex::PORT8, vex::gearSetting::ratio36_1, false);
vex::motor motor_ah2(vex::PORT3, vex::gearSetting::ratio36_1, true);

vex::drivetrain dt(motor_l1, motor_r1, 319.1764, 272, vex::distanceUnits::mm);

vex::controller con(vex::controllerType::primary);

dt.driveFor(vex::directionType::fwd, 100, vex::distanceUnits::cm, 10);

//#endregion config_globals


// Creates a competition object that allows access to Competition methods.
vex::competition Competition;

void pre_auton() {
    // All activities that occur before competition start
    // Example: setting initial positions

}

void autonomous() {
    // Place autonomous code here

}

void drivercontrol() {
    // Place drive control code here, inside the loop
    int left_power = 0;
    
    while (true) {
        while(con.ButtonR1.pressing()) {
            motor_l1.spin(vex::directionType::fwd);
            
            motor_l2.spin(vex::directionType::fwd);
            
            
            
        }
        
        
        
        
        // This is the main loop for the driver control.
        // Each time through the loop you should update motor
        // movements based on input from the controller.

    }
}

int main() {
    // Do not adjust the lines below

    // Set up (but don't start) callbacks for autonomous and driver control periods.
    //Competition.autonomous(autonomous);
    Competition.drivercontrol(drivercontrol);

    // Run the pre-autonomous function.
    pre_auton();

    // Robot Mesh Studio runtime continues to run until all threads and
    // competition callbacks are finished.
}
