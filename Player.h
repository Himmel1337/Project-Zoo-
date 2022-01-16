//
// Created by xkochnev on 09.12.2021.
//

#ifndef PROJECT_ZOO_PLAYER_H
#define PROJECT_ZOO_PLAYER_H
#include "Building.h"
#include <iostream>
#include <array>


class Player {
    std::array<int, 3> m_resources;
    std::array<int, 3> m_profit;
public:
    Player();

    void printInfoAboutPlayer();
    std::array<int, 3> getResources();
    void putTheBuilding(int type);
    void setResources(int count, int index);
    void setProfit(int profit, int type);
    void addResourceTurn();
    void market(int input);
    bool checkResources(int type);
    bool checkResourcesForCapitol(int type);
    ~Player();
};


#endif //PROJECT_ZOO_PLAYER_H
