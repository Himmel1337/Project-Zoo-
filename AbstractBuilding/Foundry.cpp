//
// Created by pco4n on 15.01.2022.
//

#include "Foundry.h"

int Foundry::getType() {
    return 3;
}

std::array<int, 3> Foundry:: getPrice() {
    Price().at(0) = 700;
    Price().at(1) = 60;
    Price().at(2) = 60;
}

int Foundry::getProfit() {
    return 10;
}