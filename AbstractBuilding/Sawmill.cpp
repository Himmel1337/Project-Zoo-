//
// Created by pco4n on 15.01.2022.
//

#include "Sawmill.h"

int Sawmill::getType() {
    return 2;
}

std::array<int, 3> Sawmill:: getPrice() {
<<<<<<< HEAD
    std::array<int, 3> price = {600, 60, 20};
    return price;
=======
    Price().at(0) = 600;
    Price().at(1) = 60;
    Price().at(2) = 20;
>>>>>>> f53954fbfd038fc13d21090c6f1dd4628d76101f
}

int Sawmill::getProfit() {
    return 10;
}