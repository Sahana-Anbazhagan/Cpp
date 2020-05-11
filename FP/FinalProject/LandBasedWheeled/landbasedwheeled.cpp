//
// Created by sahana on 4/23/20.
//

#include "landbasedwheeled.h"
#include <iostream>

void fp::LandBasedWheeled::GoUp(int &x, int &y)
{
    if(x != 15)
        x++;
    std::cout<<"LandBasedWheeled::GoUp is called"<<std::endl;
}
void fp::LandBasedWheeled::TurnRight(int &x, int &y)
{
    if(y != 15)
        y++;
    std::cout<<"LandBasedWheeled::TurnRight is called"<<std::endl;
}
void fp::LandBasedWheeled::PickUp(std::string WheelNum)
{
    std::cout<<"LandBasedWheeled::PickUp is called"<<std::endl;
}
void fp::LandBasedWheeled::TurnLeft(int &x, int &y)
{
    if(y != 0)
        y--;
    std::cout<<"LandBasedWheeled::TurnLeft is called"<<std::endl;
}
void fp::LandBasedWheeled::GoDown(int &x, int &y)
{
    if(x != 0)
        x--;
    std::cout<<"LandBasedWheeled::GoDown is called"<<std::endl;
}
void fp::LandBasedWheeled::Release(std::string WheelNum)
{
    std::cout<<"LandBasedWheeled::Release is called"<<std::endl;
}