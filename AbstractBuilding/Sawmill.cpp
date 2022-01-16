//
// Created by pco4n on 15.01.2022.
//

#include "Sawmill.h"

int Sawmill::getType() {
    return 2;
}

std::array<int, 3> Sawmill:: getPrice() {
    std::array<int, 3> price = {600, 60, 20};
    return price;
}

int Sawmill::getProfit() {
    return 10;
}