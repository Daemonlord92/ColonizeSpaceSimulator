cmake_minimum_required(VERSION 3.30)
project(ColonizeSpaceSimulator)

set(CMAKE_CXX_STANDARD 26)

add_executable(ColonizeSpaceSimulator main.cpp
        entities/Human.cpp
        entities/Human.h
        entities/Planet.cpp
        entities/Planet.h
        entities/StarSystem.cpp
        entities/StarSystem.h)
