//
// Created by pco4n on 16.01.2022.
//

#ifndef PROJECT_ZOO_COMMAND_H
#define PROJECT_ZOO_COMMAND_H
#include "../Player.h"

class Command {
public:
    virtual ~Command(){}
    virtual void Execute() const = 0;
protected:
    Command(Player* p) : pPlayer( p){}
    Player * pPlayer;
};


#endif //PROJECT_ZOO_COMMAND_H
