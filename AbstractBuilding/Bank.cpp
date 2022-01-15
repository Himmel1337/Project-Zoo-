//
// Created by pco4n on 15.01.2022.
//

#include "Bank.h"

int Bank::getType() {
    return 1;
}

std::array<int, 3> Bank:: Price() {
    Price().at(0) = 300;
    Price().at(1) = 30;
    Price().at(2) = 10;
}

int Bank::Profit() {
    return 100;
}