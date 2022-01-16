//
// Created by pco4n on 15.01.2022.
//

#include "Foundry.h"

int Foundry::getType() {
    return 3;
}

std::array<int, 3> Foundry:: getPrice() {
<<<<<<< HEAD
    std::array<int, 3> price = {700, 60, 60};
    return price;
=======
    Price().at(0) = 700;
    Price().at(1) = 60;
    Price().at(2) = 60;
>>>>>>> f53954fbfd038fc13d21090c6f1dd4628d76101f
}

int Foundry::getProfit() {
    return 10;
}