//
// Created by pco4n on 09.12.2021.
//

#ifndef PROJECT_ZOO_PLAYER_H
#define PROJECT_ZOO_PLAYER_H
#include <iostream>


class Player {
    int m_money;
    int m_wood;
    int m_steel;
public:
    Player();

    void printInfoAboutPlayer();

    int getMoney();
    int getWood();
    int getSteel();
    ~Player();
};


#endif //PROJECT_ZOO_PLAYER_H
