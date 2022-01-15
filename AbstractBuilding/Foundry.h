//
// Created by pco4n on 15.01.2022.
//

#ifndef PROJECT_ZOO_FOUNDRY_H
#define PROJECT_ZOO_FOUNDRY_H
#include "AbstractBuilding.h"

class Foundry: public AbstractBuilding {
public:
    int getType() override;
    std::array<int, 3> Price() override;
    int Profit() override;
};


#endif //PROJECT_ZOO_FOUNDRY_H
