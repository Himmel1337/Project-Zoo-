//
// Created by pco4n on 15.01.2022.
//

#include "Bank.h"

int Bank::getType() {
    return 1;
}

std::array<int, 3> Bank:: getPrice() {
<<<<<<< HEAD
    std::array<int, 3> price = {300, 30, 10};
    return price;
=======
    Price().at(0) = 300;
    Price().at(1) = 30;
    Price().at(2) = 10;
>>>>>>> f53954fbfd038fc13d21090c6f1dd4628d76101f
}

int Bank::getProfit() {
    return 100;
}