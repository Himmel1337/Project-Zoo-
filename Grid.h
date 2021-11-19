//
// Created by xkudla on 19/11/2021.
//

#ifndef PROJECT_GRID_H
#define PROJECT_GRID_H
//#include "Building"
//#include "Position"
#include <vector>
#include <array>

class Grid {
//    std::vector<Bulding*> m_bulding;
    std::array<std::array<int, 5>, 5> m_grid;

public:
    Grid();
    void print() const;
    bool checkDirection(int x, int y) const;
    void putTheBulding(int x, int y);
    void destroyBuilding(int x, int y);
    ~Grid();
};


#endif //PROJECT_GRID_H
