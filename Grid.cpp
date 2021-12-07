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
    return 0;
}

void Grid::putTheBulding(){
    std::string type = "";
    std::cout << "Input type building (string) : " << std::endl;
    std::cin >> type;
    int x = 0;
    std::cout << "Input row: " << std::endl;
    std::cin >> x;
    int y = 0;
    std::cout << "Input column: " << std::endl;
    std::cin >> y;
    m_building.push_back(new Building(type, {x, y}));
    m_grid.at(x).at(y) = Building::symbol;
}

void Grid::destroyBuilding(int x, int y){

}

//Grid::~Grid(){
//    delete m_building;
//}