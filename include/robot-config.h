using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor BL;
extern motor ML;
extern motor FL;
extern motor BR;
extern motor MR;
extern motor FR;
extern inertial imu;
extern rotation LatRot;
extern rotation LinRot;
extern motor_group DriveLeft;
extern motor_group DriveRight;
extern digital_out Pneu1;
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );