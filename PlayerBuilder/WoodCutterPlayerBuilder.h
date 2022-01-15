//
// Created by xkudla on 15/01/2022.
//

#ifndef PROJECT_WOODCUTTERPLAYERBUILDER_H
#define PROJECT_WOODCUTTERPLAYERBUILDER_H
#include "PlayerBuilder.h"

class WoodCutterPlayerBuilder: public PlayerBuilder {
public:
    void setResources() override;
    void setProfit() override;
};


#endif //PROJECT_WOODCUTTERPLAYERBUILDER_H
