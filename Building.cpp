//
// Created by xkochnev on 05.12.2021.
//

#include "Building.h"

Building::Building(std::string type, Position position){
    m_type= type;
    m_position = Position{};
}

void Building::setPosition(int x, int y) {
    m_position.x = x;
    m_position.y = y;
}

Position Building::getPosition() {
    return m_position;
}

std::string Building::getType() {
    return m_type;
}

Building::~Building() {

}




