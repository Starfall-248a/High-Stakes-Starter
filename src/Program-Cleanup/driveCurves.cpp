#include "vex.h"
#include <cmath>

#pragma once

//curves set to 0 = linear drive curve
float turningCurve = 5;
bool turningRed = true;

float forwardCurve = 7.7;
bool forwardRed = true;

// Joystick curve math
// Derrived from this graph: https://www.desmos.com/calculator/sdcgzah5ya
int curveJoystick(bool red, int input, double t){
  int val = 0;
  if(red){
    val = (exp(-t/10)+std::exp((std::abs(input)-100)/10)*(1-std::exp(-t/10))) * input;
  }else{
    //blue
    val = std::exp(((std::abs(input)-100)*t)/1000) * input;
  }
  return val;
}


void setDrive(){
    double turnVal = curveJoystick(turningRed, Controller1.Axis1.position(percent), turningCurve); //Get curvature according to settings [-100,100]
    double forwardVal = curveJoystick(forwardRed, Controller1.Axis3.position(percent), forwardCurve); //Get curvature according to settings [-100,100]

    double turnVolts = turnVal * 0.12; //Converts to voltage
    double forwardVolts = forwardVal * 0.12; //Converts to voltage

    DriveLeft.spin(forward, forwardVolts + turnVolts, voltageUnits::volt);
    DriveRight.spin(forward, forwardVolts - turnVolts, voltageUnits::volt);
}
