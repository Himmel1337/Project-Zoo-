//
// Created by xkudla on 19/11/2021.
//

#include "Grid.h"

Grid::Grid(){

    m_grid = std::array<std::array<int, 5>, 5>();

    for (auto &row: m_grid) {
        for (auto &column: row) {
            column = 0;
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
    if (m_grid.at(x).at(y) == 0){
        return true;
    } else {
        std::cout << "There is already a building in the cell" << std::endl;
        return false;
    }
}

int Grid::getTypeBuilding() const{
    std::cout << "Select building type" << std::endl;
    std::cout << "[1]" << " Bank (1) " << std::endl;
    std::cout << "[2]" << " Smeltery (2) " << std::endl;
    std::cout << "[3]" << " Sawmill (3) " << std::endl;
    int choiseBuilding;
    std::cin >> choiseBuilding;
    if(choiseBuilding == 1){
        return 1;
    } else if(choiseBuilding == 2){
        return 2;
    } else if (choiseBuilding == 3){
        return 3;
    } else {
        std::cout << "Wrong choice of building" << std::endl;
        return 0;
    }
}


void Grid::putTheBulding(Player* player){
    int x = 0;
    std::cout << "Input row [1-5]: " << std::endl;
    std::cin >> x;
    x--;
    int y = 0;
    std::cout << "Input column [1-5]: " << std::endl;
    std::cin >> y;
    y--;

    int type = getTypeBuilding();
    m_grid.at(x).at(y) = type;
    
}

void Grid::destroyBuilding(int x, int y){

}

Grid::~Grid(){}