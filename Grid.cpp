//
// Created by xkudla on 19/11/2021.
//

#include "Grid.h"

Grid::Grid(){

    m_grid = std::array<std::array<char, 5>, 5>();

    for (auto &row: m_grid) {
        for (auto &column: row) {
            column = '0';
        }
    }


}

void Grid::print() const {
    for (int y = 0; y < m_grid.size(); y++) {
        for (int x = 0; x < m_grid.at(y).size(); x++) {
            std::cout << m_grid.at(x).at(y) << " ";
        }
        std::cout << std::endl;
    }
}


bool Grid::checkDirection(int x, int y) const{
    if (m_grid.at(x).at(y) == '0'){
        return true;
    } else {
        std::cout << "There is already a building in the cell" << std::endl;
        return false;
    }
}

void Grid::putTheBulding(){
    int x = 0;
    std::cout << "Input row [1-5]: " << std::endl;
    std::cin >> x;
    x--;
    int y = 0;
    std::cout << "Input column [1-5]: " << std::endl;
    std::cin >> y;
    y--;
    if (checkDirection(x, y) == true){
        m_building.push_back(new Building({x, y}));
        m_grid.at(x).at(y) = Building::symbol;
    }
}

void Grid::destroyBuilding(int x, int y){

}

//Grid::~Grid(){
//    delete m_building;
//}