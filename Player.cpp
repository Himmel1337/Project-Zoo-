//
// Created by pco4n on 09.12.2021.
//

#include "Player.h"


Player::Player(){
    m_money=1000;
    m_wood=100;
    m_steel=50;
}

void Player::printInfoAboutPlayer() {
    std::cout<<"Player money "<<m_money<<"\nWood: "<<m_wood<<"\nSteel: "<<m_steel<<std::endl;
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