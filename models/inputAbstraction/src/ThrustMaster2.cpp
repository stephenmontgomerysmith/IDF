#include "ThrustMaster2.hh"

using namespace idf;

ThrustMaster2::ThrustMaster2(bool isMale) :
    ThrustMasterBase(isMale),
    leftButton(0, 1),
    middleButton(0, 1),
    rightButton(0, 1) {}