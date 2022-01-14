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



bool Grid::checkResources(Player* player) const{

//    if ((player->getMoney() >->getCurrentPriceInM())
//    and (player->getWood() >= building->getCurrentPriceInW()
//    and (player->getSteel() >= building->getCurrentPriceInS()))){
//        return true;
//    } else {
//        return false;
//        std::cout << "Нou don't have enough resources" << std::endl;
//    }
}

char Grid::getTypeBuilding() const{
    std::cout << "Select building type" << std::endl;
    std::cout << "[1]" << " Bank ($) " << std::endl;
    std::cout << "[2]" << " Smeltery (@) " << std::endl;
    std::cout << "[3]" << " Sawmill (#) " << std::endl;
    int choiseBuilding;
    std::cin >> choiseBuilding;
    if(choiseBuilding == 1){
        return '$';
    } else if(choiseBuilding == 2){
        return '@';
    } else if (choiseBuilding == 3){
        return '#';
    } else {
        std::cout << "Wrong choice of building" << std::endl;
        return '0';
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

    char type = getTypeBuilding();

    if (type != '0'){
        if (checkDirection(x, y) == true)/* and(checkResources() == true)*/{
            m_building.push_back(new Building({x, y}, type));
            player->setProfit(m_building.at(m_building.size() - 1)->getProfit(), type);
            player->setMoney(- m_building.at(m_building.size() - 1)->getCurrentPriceInM());
            player->setWood(- m_building.at(m_building.size() - 1)->getCurrentPriceInW());
            player->setSteel(- m_building.at(m_building.size() - 1)->getCurrentPriceInS());
            m_grid.at(x).at(y) = type;
        }
    }
}

void Grid::destroyBuilding(int x, int y){

}

Grid::~Grid(){}