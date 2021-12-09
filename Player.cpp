//
// Created by pco4n on 09.12.2021.
//

#include "Player.h"


Player::Player(){
    m_money = 1000;
    m_wood = 100;
    m_steel = 50;
}

void Player::printInfoAboutPlayer() {
    std::cout << "Player resource" << std::endl;
    std::cout << "money: " << m_money << std::endl;
    std::cout << "Wood: " << m_wood << std::endl;
    std::cout << "Steel: " << m_steel << std::endl;
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