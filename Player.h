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
    int m_profitMoney;
    int m_profitWood;
    int m_profitSteel;
public:
    Player();

    void printInfoAboutPlayer();

    int getMoney();
    int getWood();
    int getSteel();
    void setMoney(int money);
    void setWood(int wood);
    void setSteel(int steel);
    void setProfit(int profit, char type);
    void addResourceTurn();
    ~Player();
};


#endif //PROJECT_ZOO_PLAYER_H
