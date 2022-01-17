//
// Created by xkochnev on 16.01.2022.
//

#ifndef PROJECT_ZOO_CAPITOL_H
#define PROJECT_ZOO_CAPITOL_H
#include "AbstractBuilding.h"

class Capitol: public AbstractBuilding{
public:
    int getType() override;
    std::array<int, 3> getPrice() override;
    int getProfit() override;
};


#endif //PROJECT_ZOO_CAPITOL_H
