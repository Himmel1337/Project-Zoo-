//
// Created by xkochnev on 05.12.2021.
//

#include "Building.h"

Building::Building(Position position, int PriceInM, int PriceInW, int PriceInS){
    m_type= "@";
    m_position = Position{};
    m_price[0]=PriceInM;
    m_price[1]=PriceInW;
    m_price[2]=PriceInS;
}

void Building::setPosition(int x, int y) {
    m_position.x = x;
    m_position.y = y;
}

int Building::getCurrentPriceInM() {
    m_currentPrice=m_price[0];
}

int Building::getCurrentPriceInW() {
    m_currentPrice=m_price[1];
}

int Building::getCurrentPriceInS() {
    m_currentPrice=m_price[2];
}

Position Building::getPosition() {
    return m_position;
}

std::string Building::getType() {
    return m_type;
}


Building::~Building() {

}




