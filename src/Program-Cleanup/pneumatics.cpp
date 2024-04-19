#include "vex.h"

#pragma once

bool pneu1toggle = false;

void pneu1Toggle(){
  Pneu1.set(!pneu1Toggle);
  pneu1toggle = !pneu1toggle;
};