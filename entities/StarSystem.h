//
// Created by Legio on 3/20/2025.
//

#pragma once
#include <vector>
#include "Planet.h"

class StarSystem {
    std::vector<Planet*> planets;
    std::vector<std::vector<auto&>> star_system_grid{};
    std::vector<auto&> star_system_entities{};
    std::string designation;
    std::string name;
    int distance_from_earth;
    int size_of_star_system;
    double gravitial_mass;
    double luminosity;
    double temperature;
    double age;
    double metallicity;
    double gravitial_pull;
    double radiation;
    double magnetic_field;
    double solar_wind;

public:
    StarSystem(
        std::string designation,
        std::string name,
        int distance_from_earth,
        int size_of_star_system,
        double gravitial_mass,
        double luminosity,
         double temperature,
         double age,
         double metallicity,
         double gravitial_pull,
         double radiation,
        double magnetic_field,
         double solar_wind
         );
    ~StarSystem();
    void set_designation(std::string designation);
    void set_name(std::string name);
    void set_distance_from_earth(int distance_from_earth);
    void set_size_of_star_system(int size_of_star_system);
    void set_gravitial_mass(double gravitial_mass);
    void set_luminosity(double luminosity);
    void set_temperature(double temperature);
    void set_age(double age);
    void set_metallicity(double metallicity);
    void set_gravitial_pull(double gravitial_pull);
    void set_radiation(double radiation);
    void set_magnetic_field(double magnetic_field);
    void set_solar_wind(double solar_wind);
    void add_planet(Planet* planet);
    void remove_planet(Planet* planet);
    std::string get_designation();
    std::string get_name();
    int get_distance_from_earth();
    int get_size_of_star_system();
    double get_gravitial_mass();
    double get_luminosity();
    double get_temperature();
    double get_age();
    double get_metallicity();
    double get_gravitial_pull();
    double get_radiation();
    double get_magnetic_field();
    double get_solar_wind();
    std::vector<Planet*> get_planets();
    std::vector<std::vector<auto&>> get_star_system_grid();
    void display();

};

