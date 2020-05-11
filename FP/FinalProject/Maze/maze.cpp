//
// Created by sahana on 5/10/20.
//

#include "maze.h"
#include "../LandBasedWheeled/landbasedwheeled.h"
#include <iostream>
#include <string>

int fp::maze::MazeValueInit()
{
    int num = 0;
    for(auto i = 0; i < 16; i++)
    {
        for(auto j = 0; j < 16; j++)
        {
            MazeValue[i][j] = num++;
        }
    }
    for(auto i = 15; i >= 0; i--)
    {
        for(auto j = 0; j < 16; j++)
        {
            std::cout<<MazeValue[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}

int fp::maze::Position(LandBasedWheeled wheel)
{
    int x = wheel.get_x();
    int y = wheel.get_y();
    int xy = (16*x) + y;
    return xy;
}

int fp::maze::Move(LandBasedWheeled wheel)
{
    int xy = Position(wheel);
    std::cout<<"Position of the Robot: "<<xy/16<<", "<<xy%16<<std::endl;
    wheel.GoUp(wheel.x_, wheel.y_);
    xy = Position(wheel);
    std::cout<<"Position of the Robot: "<<xy/16<<", "<<xy%16<<std::endl;
    wheel.GoDown(wheel.x_, wheel.y_);
    xy = Position(wheel);
    std::cout<<"Position of the Robot: "<<xy/16<<", "<<xy%16<<std::endl;
    wheel.TurnLeft(wheel.x_, wheel.y_);
    xy = Position(wheel);
    std::cout<<"Position of the Robot: "<<xy/16<<", "<<xy%16<<std::endl;
    wheel.TurnRight(wheel.x_, wheel.y_);
    xy = Position(wheel);
    std::cout<<"Position of the Robot: "<<xy/16<<", "<<xy%16<<std::endl;
    return 0;
}