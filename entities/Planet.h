//
// Created by Legio on 3/19/2025.
//
#pragma once
#include <string>

#include "Human.h"


class Planet {
    std::string* designation;
    std::string* name;
    int* population;
    int* size;
    int* distance_from_star;
    int* distance_from_earth;
    Human* leader;

    public:
        Planet(std::string* designation,
            std::string* name,
            int* population,
            int* size,
            int* distance_from_star,
            int* distance_from_earth,
            Human* leader);
        ~Planet();
        void set_designation(std::string* designation);
        void set_name(std::string* name);
        void set_population(int* population);
        void set_size(int* size);
        void set_distance_from_star(int* distance_from_star);
        void set_distance_from_earth(int* distance_from_earth);
        void set_leader(Human* leader);
        std::string get_designation();
        std::string get_name();
        int get_population();
        int get_size();
        int get_distance_from_star();
        int get_distance_from_earth();
        Human get_leader();
        void display();
};
