//
// Created by xkochnev on 15.01.2022.
//

#include "Bank.h"

int Bank::getType() {
    return 1;
}

std::array<int, 3> Bank:: getPrice() {
    std::array<int, 3> price = {300, 30, 10};
    return price;
}

int Bank::getProfit() {
    return 100;
}