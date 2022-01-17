cmake_minimum_required(VERSION 3.20)
project(Project)

set(CMAKE_CXX_STANDARD 14)


add_executable(Project main.cpp Game.cpp Game.h Grid.cpp Grid.h Building.cpp Building.h Player.cpp Player.h PlayerBuilder/BankerPlayerBuilder.cpp PlayerBuilder/BankerPlayerBuilder.h PlayerBuilder/BlacksmithPlayerBuilder.cpp PlayerBuilder/BlacksmithPlayerBuilder.h PlayerBuilder/PlayerBuilder.cpp PlayerBuilder/PlayerBuilder.h PlayerBuilder/PlayerDirector.cpp PlayerBuilder/PlayerDirector.h PlayerBuilder/WoodCutterPlayerBuilder.cpp PlayerBuilder/WoodCutterPlayerBuilder.h AbstractBuilding/AbstractBuilding.cpp AbstractBuilding/AbstractBuilding.h AbstractBuilding/Bank.cpp AbstractBuilding/Bank.h AbstractBuilding/Foundry.cpp AbstractBuilding/Foundry.h AbstractBuilding/Sawmill.cpp AbstractBuilding/Sawmill.h AbstractBuilding/Capitol.cpp AbstractBuilding/Capitol.h Errorlogger.cpp Errorlogger.h)

