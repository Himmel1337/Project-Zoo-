//
// Created by pco4n on 16.01.2022.
//

#ifndef PROJECT_ZOO_MAKETURNCOMMAND_H
#define PROJECT_ZOO_MAKETURNCOMMAND_H
#include "Command.h"
#include <iostream>

class MakeTurnCommand: public Command{
public:
    MakeTurnCommand(Player * p): Command( p){}
    void Execute();
};


#endif //PROJECT_ZOO_MAKETURNCOMMAND_H
