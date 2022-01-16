//
// Created by xkudla on 15/01/2022.
//

#ifndef PROJECT_BANKERPLAYERBUILDER_H
#define PROJECT_BANKERPLAYERBUILDER_H
#include "PlayerBuilder.h"

class BankerPlayerBuilder: public PlayerBuilder {
public:
    void setResources() override;
    void setProfit() override;
};


#endif //PROJECT_BANKERPLAYERBUILDER_H
