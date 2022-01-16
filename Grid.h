//
// Created by xkudla on 19/11/2021.
//

#ifndef PROJECT_GRID_H
#define PROJECT_GRID_H
#include <iostream>
#include <vector>
#include <array>
#include "Building.h"
#include "Player.h"

class Grid {
    std::array<std::array<int, 5>, 5> m_grid;

public:

    Grid();
    void print() const;
    bool checkDirection(int x, int y) const;
    int getTypeBuilding() const;
    void putTheBulding(int type, int x, int y);
    void destroyBuilding(int x, int y);
    bool checkDirectionForDestroy(int x, int y) const;
    bool checkCapitol();
    ~Grid();
};


#endif //PROJECT_GRID_H
