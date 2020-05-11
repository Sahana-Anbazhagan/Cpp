//
// Created by sahana on 5/10/20.
//

#pragma once

#include <iostream>
#include <string>
#include "../LandBasedWheeled/landbasedwheeled.h"

namespace fp {
    class maze {
    public:
        int MazeValue[16][16];
        int MazeValueInit();
        int Position(fp::LandBasedWheeled wheel);
        int Move(fp::LandBasedWheeled wheel);
        int CheckWall();
        int SetWall();
    };
}