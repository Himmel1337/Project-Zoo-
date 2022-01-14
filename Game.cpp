//
// Created by xkudla on 14/11/2021.
//

#include "Game.h"
#include "Grid.h"
#include "Position.h"
#include <iostream>

Game::Game() {
    m_grid = new Grid();
    m_player = new Player();
}

void Game::printIntroduction() const {
    std::cout << "Game started." << std::endl;
}

void Game::printOptions() const {
    std::cout << "[1] " << "Put the bulding" << std::endl;
    std::cout << "[2] " << "Print resource player" << std::endl;
    std::cout << "[3] " << "Market" << std::endl;
    std::cout << "[8] " << "Skip turn" << std::endl;
    std::cout << "[9] " << "Exit game" << std::endl;
    std::cout << "Input number for action: " << std::endl;
}

int Game::waitForInput() const {
    int input;
    std::cin >> input;
    return input;
}

void Game::printEnd() const {
    std::cout << "Game ended" << std::endl;
}

void Game::start() {
    printIntroduction();

    while (true) {
        m_grid->print();
        printOptions();
        int input = waitForInput();
        processInput(input);
        m_player->addResourceTurn();
    }
}

void Game::processInput(int input) {
    switch (input) {
        case 9: printEnd(); exit(0);
        case 1: m_grid->putTheBulding(m_player); break;
        case 2: m_player->printInfoAboutPlayer(); break;
        case 3:
            std::cout << "Market" << std::endl;
            std::cout << "[1] " << "Buy 10 wood for 100 money" << std::endl;
            std::cout << "[2] " << "Buy 10 steel for 100 money" << std::endl;
            std::cout << "[3] " << "Sell 10 wood for 80 money" << std::endl;
            std::cout << "[4] " << "Sell 10 steel for 80 money" << std::endl;
            std::cout << "[5] " << "Return" << std::endl;
            std::cout << "Input: " << std::endl;
            int input;
            std::cin >> input;
            if (input == 5) start();
            m_player->market(input);
        break;
        case 8: std::cout << "The move is missed" << std::endl; break;
        default: std::cout << "Unsupported option!" << std::endl;
    }
}

Game::~Game(){
    delete m_player;
    delete m_grid;
}

//Position Game::choicePosition(){
//    if (m_grid->checkDirection(x, y)) {
//        m_grid->putTheBuilding(x, y);
//    } else {
//        std::cout << "You cannot put a building off the grid" << std::endl;
//    }
//}
