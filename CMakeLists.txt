cmake_minimum_required(VERSION 3.20)
project(Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project main.cpp Game.cpp Game.h Grid.cpp Grid.h Building.cpp Building.h Player.cpp Player.h)
