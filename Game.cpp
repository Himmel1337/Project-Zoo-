//
// Created by xkudla on 14/11/2021.
//

#include "Game.h"
#include <iostream>


Game::Game() {
    m_grid = new Grid();
}

void Game::printIntroduction() const {
    std::cout << "Game started." << std::endl;
}

void Game::printOptions() const {
    std::cout << "[1] " << "Put the bulding" << std::endl;
    std::cout << "[2] " << "Print resource player" << std::endl;
    std::cout << "[3] " << "Market" << std::endl;
    std::cout << "[4] " << "Destroy the building" << std::endl;
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

void Game::createPlayer(){
    std::cout << "[1] " << "Banker" << std::endl;
    std::cout << "[2] " << "Woodcutter" << std::endl;
    std::cout << "[3] " << "Blacksmith" << std::endl;
    std::cout << "Choose a player: " << std::endl;
    PlayerDirector *playerDirector;
    int choice;
    std::cin >> choice;
    switch (choice) {
        case 1:
            playerDirector = new PlayerDirector(new BankerPlayerBuilder());
            break;
        case 2:
            playerDirector = new PlayerDirector(new WoodCutterPlayerBuilder());
            break;
        case 3:
            playerDirector = new PlayerDirector(new BlacksmithPlayerBuilder());
            break;
        default: std::cout << "Unsupported option!" << std::endl;
        createPlayer();
    }
    m_player = playerDirector->constructPlayer();
    delete playerDirector;
}

void Game::start() {
    while (true) {
        m_grid->print();
        printOptions();
        int input = waitForInput();
        processInput(input);
        m_player->addResourceTurn();
    }
}

void Game::printAvailablePosition() {
    int x = 0;
    std::cout << "Input row [1-5]: " << std::endl;
    std::cin >> x;
    while(x>5 or x<1){
        std::cout<<"Wrong row. Input row [1-5]:"<<std::endl;
        std::cin>>x;
    }
    x--;
    int y = 0;
    std::cout << "Input column [1-5]: " << std::endl;
    std::cin >> y;
    while(y>5 or y<1){
        std::cout<<"Wrong column. Input column [1-5]:"<<std::endl;
        std::cin>>y;
    }
    y--;
    if(m_grid->checkDirection(x,y) == false){
        start();
    }
    int buildingType = m_grid->getTypeBuilding();

    if(m_player->checkResources(buildingType) == true){
        m_grid->putTheBulding(buildingType, x, y);
        m_player->putTheBuilding(buildingType);
        m_turns--;
        std::cout<<m_turns<<" moves until Game Over."<<std::endl;
    }
}

void Game::destroyBuilding() {
    int x = 0;
    std::cout << "Input row [1-5]: " << std::endl;
    std::cin >> x;
    x--;
    while(x>5 or x<1){
        std::cout<<"Wrong row. Input row [1-5]:"<<std::endl;
        std::cin>>x;
    }
    int y = 0;
    std::cout << "Input column [1-5]: " << std::endl;
    std::cin >> y;
    while(y>5 or y<1){
        std::cout<<"Wrong column. Input column [1-5]:"<<std::endl;
        std::cin>>y;
    }
    y--;
    if(m_grid->checkDirectionForDestroy(x,y) == true){
        m_grid->destroyBuilding(x,y);
        m_turns--;
        std::cout<<m_turns<<" moves until Game Over."<<std::endl;
    }else{
        start();
    }

}

void Game::processInput(int input) {
    switch (input) {
        case 9: printEnd(); exit(0);
        case 1: winGame();
                if(m_grid->checkCapitol() == true){
                    std::cout<<"!!!VICTORY!!!"<<std::endl;
                    printEnd();
                    exit(0);
                }
                printAvailablePosition();
                break;
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
        case 4:destroyBuilding();
        case 8: std::cout << "The move is missed" << std::endl;
                winGame();
                if(m_grid->checkCapitol() == true){
                std::cout<<"!!!VICTORY!!!"<<std::endl;
                printEnd();
                exit(0);
                }
                m_turns--;
                std::cout<<m_turns<<" moves until Game Over."<<std::endl;
                break;
        default: std::cout << "Unsupported option!" << std::endl;
    }

}

void Game::winGame() {
    if((m_turns > 0) and (m_player->checkResources(4) == true)){
        std::cout<<"Congratulations! You finally can build the Capitol!"<<std::endl;
    }
    if(m_turns < 1) {
        std::cout << "Game Over" << std::endl;
        printEnd();
        exit(0);
    }

}

Game::~Game(){
    delete m_player;
    delete m_grid;
}
