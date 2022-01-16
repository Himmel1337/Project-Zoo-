//
// Created by xkochnev on 05.12.2021.
//

#include "Building.h"
#include "AbstractBuilding/Bank.h"
#include "AbstractBuilding/Foundry.h"
#include "AbstractBuilding/Sawmill.h"
#include "AbstractBuilding/Capitol.h"


Building::Building(){
    m_abstractBuilding = nullptr;
    m_type = 0;
    m_profit = 0;
    m_price = {0, 0, 0};
}

void Building::setBuildingType(int type){
    m_type = type;
    if (m_abstractBuilding != nullptr){
        delete m_abstractBuilding;
    }
    switch (type) {
        case 1:
            m_abstractBuilding = new Bank();
            makeChanges();
            break;
        case 2:
            m_abstractBuilding = new Sawmill();
            makeChanges();
            break;
        case 3:
            m_abstractBuilding = new Foundry();
            makeChanges();
            break;
        case 4:
            m_abstractBuilding = new Capitol();
            makeChanges();
            break;
        default: throw std::invalid_argument("Building type does not exist");
    }
}


void Building::setPrice(std::array<int, 3> price){
    m_price = price;
}

void Building::setProfit(int profit){
    m_profit = profit;
}

void Building::setType(int type){
    m_type = type;
}


void Building::makeChanges(){
    setPrice(m_abstractBuilding->getPrice());
    setProfit(m_abstractBuilding->getProfit());
    setType(m_abstractBuilding->getType());
}

std::array<int, 3> Building::getCurrentPrice() {
    return m_price;
}

int Building::getProfit(){
    return m_profit;
}

int Building::getType() {
    return m_type;
}

Building::~Building() {

}

