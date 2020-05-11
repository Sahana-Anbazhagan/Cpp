#include "LandBasedWheeled/landbasedwheeled.h"
#include "LandBasedTracked/landbasedtracked.h"
#include "Maze/maze.h"
#include <vector>
#include <memory>
#include <iostream>
int main(){
    int x, y = 0;
    fp::maze m;
    m.MazeValueInit();
    do{
        std::cout<<"Please enter the x, y coordinates to start"<<std::endl;
        std::cin>>x>>y;
    }while((x < 0 || x >= 16) && (y < 0 || y >= 16));
    fp::LandBasedWheeled wheel("A",x,y);
    m.Move(wheel);
    return 0;
}
