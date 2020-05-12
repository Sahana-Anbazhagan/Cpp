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
        int Wall[256][256];
        int MazeValue[16][16];

        int MazeValueInit();
        int Position(fp::LandBasedWheeled wheel);
        int Move(fp::LandBasedWheeled wheel);
        int WallInit();
        bool CheckWall(int a, int b);
        int SetWall(int a, int b);
    };
}