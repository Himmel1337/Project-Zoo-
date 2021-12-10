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
    char m_type;
    std::array<int, 3> m_price;
    Position m_position{};
    int m_profit;
public:
    Building(Position position, char type);
    char getType();
    int getCurrentPriceInM();
    int getCurrentPriceInW();
    int getCurrentPriceInS();
    int getProfit();
    Position getPosition();
    void setPosition(int x, int y);
    void setType(char type);
    void setResource(char type);
    ~Building();
};


#endif //PROJECT_ZOO_MAIN_BUILDING_H
