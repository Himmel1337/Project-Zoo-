//
// Created by pco4n on 15.01.2022.
//

#ifndef PROJECT_ZOO_ABSTRACTBUILDING_H
#define PROJECT_ZOO_ABSTRACTBUILDING_H
#include <iostream>
#include <array>

class AbstractBuilding {
    virtual int getType() = 0;
    virtual std::array<int, 3> Price() = 0;
    virtual int Profit() = 0;
};


#endif //PROJECT_ZOO_ABSTRACTBUILDING_H
