//
// Created by xkochnev on 05.12.2021.
//

#include "Building.h"

Building::Building(Position position, char type){
    setType(type);
    setResource(type);
    m_position = Position{};
}

void Building::setType(char type) {
    m_type = type;
}

void Building::setResource(char type){
    if (type == '$'){
        m_price.at(0) = 300;
        m_price.at(1) = 30;
        m_price.at(2) = 10;
        m_profit = 100;
    } else if (type == '@') {
        m_price.at(0) = 500;
        m_price.at(1) = 60;
        m_price.at(2) = 20;
        m_profit = 10;
    } else if (type == '#'){
        m_price.at(0) = 700;
        m_price.at(1) = 60;
        m_price.at(2) = 60;
        m_profit = 10;
    } else {
        std::cout << "Building is not exist" << std::endl;
    }
}

void Building::setPosition(int x, int y) {
    m_position.x = x;
    m_position.y = y;
}

int Building::getCurrentPriceInM() {
    return m_price.at(0);
}

int Building::getCurrentPriceInW() {
    return m_price.at(1);
}

int Building::getCurrentPriceInS() {
    return m_price.at(2);
}

int Building::getProfit(){
    return m_profit;
}

Position Building::getPosition() {
    return m_position;
}

char Building::getType() {
    return m_type;
}


Building::~Building() {

}




