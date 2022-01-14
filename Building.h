//
// Created by xkochnev on 05.12.2021.
//

#ifndef PROJECT_ZOO_MAIN_BUILDING_H
#define PROJECT_ZOO_MAIN_BUILDING_H
#include <iostream>
#include <array>
#include "Position.h"
#include "Player.h"

class Building {
    int m_type;
    std::array<int, 3> m_price;
    Position m_position{};
    int m_profit;
public:
    Building(Position position, char type);
    Building();
    char getType();
    std::array<int, 3> getCurrentPrice();
    int getProfit();
    Position getPosition();
    void setPosition(int x, int y);
    void setType(char type);
    ~Building();
};


#endif //PROJECT_ZOO_MAIN_BUILDING_H
