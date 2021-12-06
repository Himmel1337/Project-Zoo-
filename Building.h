//
// Created by xkochnev on 05.12.2021.
//

#ifndef PROJECT_ZOO_MAIN_BUILDING_H
#define PROJECT_ZOO_MAIN_BUILDING_H
#include <iostream>
#include "Position.h"

class Building {
    std::string m_type;
    Position m_position{};
public:
    Building(std::string type, Position position);
    static const char symbol = '@';
    std::string getType();
    Position getPosition();
    void setPosition(int x, int y);
    ~Building();
};


#endif //PROJECT_ZOO_MAIN_BUILDING_H
