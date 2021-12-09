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
    std::string m_type;
    std::array<int, 3> m_price;
    int m_currentPrice;
    Position m_position{};
public:
    Building(Position position, int PriceInM, int PriceInW, int PriceInS);
    Building(Position position);
    static const char symbol = '@';
    std::string getType();
    int getCurrentPriceInM();
    int getCurrentPriceInW();
    int getCurrentPriceInS();
    Position getPosition();
    void setPosition(int x, int y);
    ~Building();
};


#endif //PROJECT_ZOO_MAIN_BUILDING_H
