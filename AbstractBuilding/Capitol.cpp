//
// Created by xkochnev on 16.01.2022.
//

#include "Capitol.h"

int Capitol::getType() {
    return 1;
}

std::array<int, 3> Capitol:: getPrice() {
    std::array<int, 3> price = {10500, 400, 500};
    return price;
}

int Capitol::getProfit() {
    return 5000;
}