//
// Created by sahana on 4/23/20.
//

#pragma once

#include <iostream>
#include <string>
#include <memory>
#include "../LandBasedRobot/landbasedrobot.h"

namespace fp  {
    class LandBasedWheeled : public LandBasedRobot{
    public:
        void GoUp(int &x, int &y) override;
        void TurnRight(int &x, int &y) override;
        void GoDown(int &x, int &y) override;
        void TurnLeft(int &x, int &y) override;
        void PickUp(std::string) override;
        void Release(std::string) override;
        friend class maze;
        LandBasedWheeled(std::string name = "None",
                         int x = 0,
                         int y = 0,
                         double speed = 0.0,
                         double width = 0.0,
                         double length = 0.0,
                         double height = 0.0,
                         double capacity = 0.0,
                         int WheelNumber = 2):LandBasedRobot(name,
                                                             x,
                                                             y,
                                                             speed,
                                                             width,
                                                             length,
                                                             height,
                                                             capacity),
                                                             wheel_number {WheelNumber} {};

        virtual ~LandBasedWheeled()
        {
//            std::cout<<"LandBasedWheeled destructor called"<<std::endl;
        }
    protected:
        int wheel_number;
        std::shared_ptr<std::string> wheel_type;
    };
}