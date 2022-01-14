//
// Created by pco4n on 09.12.2021.
//

#include "Player.h"


Player::Player(){
    m_money = 10000;
    m_wood = 200;
    m_steel = 200;
    m_profitMoney = 0;
    m_profitWood = 0;
    m_profitSteel = 0;
}

void Player::printInfoAboutPlayer() {
    std::cout << "Player resource" << std::endl;
    std::cout << "money: " << m_money << std::endl;
    std::cout << "Wood: " << m_wood << std::endl;
    std::cout << "Steel: " << m_steel << std::endl;
    std::cout << "Profit money: " << m_profitMoney << std::endl;
    std::cout << "Profit Wood: " << m_profitWood << std::endl;
    std::cout << "Profit Steel: " << m_profitSteel << std::endl;
}

int Player::getMoney() {
    return m_money;
}

int Player::getWood() {
    return m_wood;
}

int Player::getSteel() {
    return m_steel;
}

void Player::setMoney(int money){
    m_money += money;
}
void Player::setWood(int wood){
    m_wood += wood;
}
void Player::setSteel(int steel){
    m_steel += steel;
}

void Player::setProfit(int profit, char type){
    if (type == '$'){
        m_profitMoney += profit;
    } else if (type == '@'){
        m_profitWood += profit;
    } else if (type == '#'){
        m_profitSteel += profit;
    }
}

void Player::addResourceTurn(){
    setMoney(m_profitMoney);
    setWood(m_profitWood);
    setSteel(m_profitSteel);
}

void Player::market(int input){
    switch (input) {
        case 1:
            if (m_money >= 100) {
                m_money -= 100;
                m_wood += 10;
            } else std::cout << "Нou don't have enough money";
            break;
        case 2:
            if (m_money >= 100) {
                m_money -= 100;
                m_steel += 10;
            } else std::cout << "Нou don't have enough money";
            break;
        case 3:
            if (m_wood >= 10) {
                m_money += 80;
                m_wood -= 10;
            } else std::cout << "Нou don't have enough wood";
            break;
        case 4:
            if (m_steel >= 10) {
                m_money += 80;
                m_steel -= 10;
            } else std::cout << "Нou don't have enough steel";
            break;
        default: std::cout << "Unsupported option!" << std::endl;
    }
}

Player::~Player(){}