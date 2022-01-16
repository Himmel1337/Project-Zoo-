//
// Created by xkochnev on 05.12.2021.
//

#ifndef PROJECT_ZOO_MAIN_BUILDING_H
#define PROJECT_ZOO_MAIN_BUILDING_H
#include <iostream>
#include <array>
#include "Player.h"
<<<<<<< HEAD
#include "AbstractBuilding/AbstractBuilding.h"

class Building {
    AbstractBuilding* m_abstractBuilding;
=======
#include "../AbstractBuilding/AbstractBuilding.h"


class Building {
    AbstractBuilding* m_abstractBuilding;
    std::array<AbstractBuilding*, 3> m_price;
    AbstractBuilding* m_profit;
public:
    Building();

    /*
    int m_type;
>>>>>>> f53954fbfd038fc13d21090c6f1dd4628d76101f
    std::array<int, 3> m_price;
    int m_profit;
    int m_type;
public:
    Building();
    std::array<int, 3> getCurrentPrice();
    int getProfit();
    int getType();
    void setPrice(std::array<int, 3> price);
    void setProfit(int profit);
    void setType(int type);
    void setBuildingType(int type);
    void makeChanges();
    ~Building();
     */
};


#endif //PROJECT_ZOO_MAIN_BUILDING_H
