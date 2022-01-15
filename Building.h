//
// Created by xkochnev on 05.12.2021.
//

#ifndef PROJECT_ZOO_MAIN_BUILDING_H
#define PROJECT_ZOO_MAIN_BUILDING_H
#include <iostream>
#include <array>
#include "Player.h"
#include "../AbstractBuilding/AbstractBuilding.h"


class Building {
    AbstractBuilding* m_abstractBuilding;
    std::array<AbstractBuilding*, 3> m_price;
    AbstractBuilding* m_profit;
public:
    Building();

    /*
    int m_type;
    std::array<int, 3> m_price;
    int m_profit;
public:
    Building(int type);
    Building();
    std::array<int, 3> getCurrentPrice();
    int getProfit();
    int getType();
    void setType(int type);
    ~Building();
     */
};


#endif //PROJECT_ZOO_MAIN_BUILDING_H
