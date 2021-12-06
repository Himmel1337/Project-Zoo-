//
// Created by xkudla on 19/11/2021.
//

#include "Grid.h"

Grid::Grid(){
    m_grid = std::array<std::array<char, 5>, 5>();

    for (auto &row: m_grid) {
        for (auto &column: row) {
            column = 0;
        }
    }
}

void Grid::print() const{
    for (int y = 0; y < m_grid.size(); y++) {
        for (int x = 0; x < m_grid.at(y).size(); x++) {
//            if (m_building->getPosition().x == x and m_building->getPosition().y == y) {
//              std::cout << Building::symbol;
//            } else {
              std::cout <<m_grid.at(x).at(y) << " ";
//            }
        }
        std::cout << std::endl;
    }


bool Grid::checkDirection(int x, int y) const{

}

void Grid::putTheBulding(int x, int y){

}

void Grid::destroyBuilding(int x, int y){

}

Grid::~Grid(){

}