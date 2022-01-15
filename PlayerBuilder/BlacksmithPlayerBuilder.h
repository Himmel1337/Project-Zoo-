//
// Created by xkudla on 15/01/2022.
//

#ifndef PROJECT_BLACKSMITHPLAYERBUILDER_H
#define PROJECT_BLACKSMITHPLAYERBUILDER_H
#include "PlayerBuilder.h"

class BlacksmithPlayerBuilder: public PlayerBuilder {
public:
    void setResources() override;
    void setProfit() override;
};


#endif //PROJECT_BLACKSMITHPLAYERBUILDER_H
