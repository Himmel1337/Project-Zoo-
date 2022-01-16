//
// Created by pco4n on 15.01.2022.
//

#include "Foundry.h"

int Foundry::getType() {
    return 3;
}

std::array<int, 3> Foundry:: getPrice() {
    std::array<int, 3> price = {700, 60, 60};
    return price;
}

int Foundry::getProfit() {
    return 10;
}