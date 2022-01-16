//
// Created by xkudla on 15/01/2022.
//

#include "WoodCutterPlayerBuilder.h"

void WoodCutterPlayerBuilder::setResources(){
    m_player->setResources(6000, 1);
    m_player->setResources(800, 2);
    m_player->setResources(400, 3);
}

void WoodCutterPlayerBuilder::setProfit(){
    m_player->setProfit(40, 2);
}