#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor FL = motor(PORT19, ratio36_1, false);
motor ML = motor(PORT18, ratio36_1, false);
motor BL = motor(PORT17, ratio36_1, false);
motor FR = motor(PORT11, ratio36_1, true);
motor MR = motor(PORT10, ratio36_1, true);
motor BR = motor(PORT9, ratio36_1, true);
inertial imu = inertial(PORT6);
rotation LatRot = rotation(PORT4);
rotation LinRot = rotation(PORT3);
motor_group DriveLeft(FL,ML,BL);
motor_group DriveRight(FR,MR,BR);
// VEXcode generated functions
bool RemoteControlCodeEnabled = true;


/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}