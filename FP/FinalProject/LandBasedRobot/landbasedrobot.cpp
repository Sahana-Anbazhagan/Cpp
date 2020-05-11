#include <iostream>
#include <string>

#include "landbasedrobot.h"


void fp::LandBasedRobot::GoUp(int &x, int &y)
{
    std::cout << "LandBasedRobot::GoUp is called" << std::endl;
}

void fp::LandBasedRobot::GoDown(int &x, int &y)
{
    std::cout << "LandBasedRobot::GoDown is called" << std::endl;
}

void fp::LandBasedRobot::TurnLeft(int &x, int &y)
{
    std::cout << "LandBasedRobot::TurnLeft is called" << std::endl;
}

void fp::LandBasedRobot::TurnRight(int &x, int &y)
{
    std::cout << "LandBasedRobot::TurnRight is called" << std::endl;
}

void fp::LandBasedRobot::PickUp(std::string)
{
    std::cout << "LandBasedRobot::PickUp is called" << std::endl;
}

void fp::LandBasedRobot::Release(std::string)
{
    std::cout << "LandBasedRobot::Release is called" << std::endl;
}