#pragma once

/**
 * @file landbasedrobot.h
 * @authors
 * Group 1 
* 
*
* @section DESCRIPTION
* 
* This is an abstract class whose attributes and methods are used by 
* the derived classes, namely LandBasedWheeled and LandBasedTracked.
*                                                                                               
* 
*/
#include <iostream>
#include <string>

namespace fp
{

    class LandBasedRobot
    {
    public:

/**
* @brief constructor of a class named LandBasedRobot.
* It is a no parameter constructor.
* @param none
* @return none
*/
        // LandBasedRobot(){};
/**
* @brief It is a 3 parameter constructor of the class named LandBasedRobot
* and it initialises name_, x_ and y_
* @param name
* @param x
* @param y
* @return none
*/
        LandBasedRobot(std::string name = "None",
                       int x = 0,
                       int y = 0,
                       double speed = 0.0,
                       double width = 0.0,
                       double length = 0.0,
                       double height = 0.0,
                       double capacity = 0.0):name_{name},
                                              x_{x},
                                              y_{y},
                                              speed_{speed},
                                              width_{width},
                                              length_{length},
                                              height_{height},
                                              capacity_{capacity}{};
/**
* @brief It is a virtual destructor of class named "LandBasedRobot"
* and it destroys the object created
* @param none
* @return none
*/
        virtual ~LandBasedRobot() {};
/**
* @brief It is a pure virtual function named "GoUp"
* that increments the y coordinate
* @param int
* @param int
* @return none
*/
        virtual void GoUp(int &, int &) = 0;
/**
* @brief It is a pure virtual function named "GoDown"
* that decrements the y coordinate
* @param int
* @param int
* @return none
*/
        virtual void GoDown(int &, int &) = 0;
/**
* @brief It is a pure virtual function named "TurnLeft"
* that decrements the x coordinate
* @param int
* @param int
* @return none
*/
        virtual void TurnLeft(int &, int &) = 0;
/**
* @brief It is a pure virtual function named "TurnRight"
* that increments the x coordinate
* @param int
* @param int
* @return none
*/
        virtual void TurnRight(int &, int &) = 0;
/**
* @brief It is a pure virtual function named "Pickup"
* that picks up the object
* @param std::string
* @return none
*/
        virtual void PickUp(std::string) = 0;
/**
* @brief It is a pure virtual function named "Release" that releases
* the object
* @param std::string
* @return none
*/
        virtual void Release(std::string) = 0;
/**
* @brief It is a Getter function for x coordinate
* @param none
* @return x-coordinate (named x_)
*/
        int get_x() const
        {
            //std::cout << "Getter tracked x called" << std::endl;
            return x_;
        }
/**
* @brief It is a Getter function for y coordinate
* @param none
* @return y-coordinate (named y_)
*/
        int get_y() const
        {
            //std::cout << "Getter tracked y called" << std::endl;
            return y_;
        }
    protected:
        std::string name_;
        int x_;
        int y_;
        double speed_;
        double width_;
        double length_;
        double height_;
        double capacity_;

    };//--class end
}//--namespace end