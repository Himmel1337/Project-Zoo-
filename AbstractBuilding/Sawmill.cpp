//
// Created by pco4n on 15.01.2022.
//

#include "Sawmill.h"

int Sawmill::getType() {
    return 2;
}

std::array<int, 3> Sawmill:: getPrice() {
    Price().at(0) = 600;
    Price().at(1) = 60;
    Price().at(2) = 20;
}

int Sawmill::getProfit() {
    return 10;
}