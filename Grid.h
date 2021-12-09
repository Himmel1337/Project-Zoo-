//
// Created by xkudla on 19/11/2021.
//

#ifndef PROJECT_GRID_H
#define PROJECT_GRID_H
#include <iostream>
#include <vector>
#include <array>
#include "Building.h"
#include "Position.h"
#include "Player.h"

class Grid {
    std::vector<Building*> m_building;
    std::array<std::array<char, 5>, 5> m_grid;
    int m_currentPrice=0;
    int m_playerMoney;
    int m_playerWood;
    int m_playerSteel;

public:

    Grid();
    void print() const;
    bool checkDirection(int x, int y) const;
    bool checkResources(Building*);
    void setPlayerResources(Player*);
    void putTheBulding();
    void destroyBuilding(int x, int y);
    ~Grid();
};


#endif //PROJECT_GRID_H
