//
// Created by xkochnev on 09.12.2021.
//

#include "Player.h"


Player::Player(){
    m_resources = {0, 0, 0};
    m_profit = {0, 0, 0};
}

void Player::printInfoAboutPlayer() {
    std::cout << "Player resource" << std::endl;
    std::cout << "money: " << m_resources.at(0) << std::endl;
    std::cout << "Wood: " << m_resources.at(1) << std::endl;
    std::cout << "Steel: " << m_resources.at(2) << std::endl;
    std::cout << "Profit money: " << m_profit.at(0) << std::endl;
    std::cout << "Profit Wood: " << m_profit.at(1) << std::endl;
    std::cout << "Profit Steel: " << m_profit.at(2) << std::endl;
}

std::array<int, 3> Player::getResources() {
    return m_resources;
}

void Player::putTheBuilding(int type) {
    if(checkResources(type) == true){
        Building *building = new Building();
        building->setBuildingType(type);
        m_resources.at(0) -= building->getCurrentPrice().at(0);
        m_resources.at(1) -= building->getCurrentPrice().at(1);
        m_resources.at(2) -= building->getCurrentPrice().at(2);
        setProfit(building->getProfit(), type);
    }
}

void Player::setProfit(int profit, int type){
    if (type == 1){
        m_profit.at(0) += profit;
    } else if (type == 2){
        m_profit.at(1) += profit;
    } else if (type == 3){
        m_profit.at(2) += profit;
    }
}

void Player::setResources(int count, int index){
    if (index == 1){
        m_resources.at(0) += count;
    } else if (index == 2){
        m_resources.at(1) += count;
    } else if (index == 3){
        m_resources.at(2) += count;
    }
}

bool Player::checkResourcesForCapitol(int type) {
    bool check;
    Building *building = new Building();
    building->setBuildingType(type);
    if (m_resources.at(0) >= building->getCurrentPrice().at(0) and
        m_resources.at(1) >= building->getCurrentPrice().at(1) and
        m_resources.at(2) >= building->getCurrentPrice().at(2)) {
        check = true;
    }
};
bool Player::checkResources(int type){
    bool check;
    Building *building = new Building();
    building->setBuildingType(type);
    if (m_resources.at(0) >= building->getCurrentPrice().at(0) and
        m_resources.at(1) >= building->getCurrentPrice().at(1) and
        m_resources.at(2) >= building->getCurrentPrice().at(2)){
        check = true;
    } else {
        check = false;
        std::cout << "You don't have enough resources. " << std::endl;
    }
    delete building;
    return check;
}
void Player::addResourceTurn(){
    m_resources.at(0) += m_profit.at(0);
    m_resources.at(1) += m_profit.at(1);
    m_resources.at(2) += m_profit.at(2);
}


void Player::market(int input){
    switch (input) {
        case 1:
            if (m_resources.at(0) >= 100) {
                m_resources.at(0) -= 100;
                m_resources.at(1) += 10;
            } else std::cout << "You don't have enough money";
            break;
        case 2:
            if (m_resources.at(0) >= 100) {
                m_resources.at(0) -= 100;
                m_resources.at(2) += 10;
            } else std::cout << "You don't have enough money";
            break;
        case 3:
            if (m_resources.at(1) >= 10) {
                m_resources.at(0) += 80;
                m_resources.at(1) -= 10;
            } else std::cout << "You don't have enough wood";
            break;
        case 4:
            if (m_resources.at(2) >= 10) {
                m_resources.at(0) += 80;
                m_resources.at(2) -= 10;
            } else std::cout << "Нou don't have enough steel";
            break;
        default: std::cout << "Unsupported option!" << std::endl;
    }
}

Player::~Player(){}