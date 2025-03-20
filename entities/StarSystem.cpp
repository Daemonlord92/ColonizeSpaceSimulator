//
// Created by Legio on 3/20/2025.
//

#include "StarSystem.h"

#include <iostream>
#include <bits/ranges_algo.h>

StarSystem::StarSystem(std::string designation, std::string name, int distance_from_earth, int size_of_star_system,
                       double gravitial_mass, double luminosity, double temperature, double age, double metallicity, double gravitial_pull,
                       double radiation, double magnetic_field, double solar_wind) {
    this->designation = designation;
    this->name = name;
    this->distance_from_earth = distance_from_earth;
    this->size_of_star_system = size_of_star_system;
    this->gravitial_mass = gravitial_mass;
    this->luminosity = luminosity;
    this->temperature = temperature;
    this->age = age;
    this->metallicity = metallicity;
    this->gravitial_pull = gravitial_pull;
    this->radiation = radiation;
    this->magnetic_field = magnetic_field;
    this->solar_wind = solar_wind;
    this->planets = std::vector<Planet*>();
    this->star_system_grid = std::vector<std::vector<auto&>>();
    this->star_system_entities = std::vector<auto&>();
}

StarSystem::~StarSystem() = default;

void StarSystem::set_designation(std::string designation) {
    this->designation = std::move(designation);
}

void StarSystem::set_name(std::string name) {
    this->name = std::move(name);
}

void StarSystem::set_distance_from_earth(int distance_from_earth) {
    this->distance_from_earth = distance_from_earth;
}

void StarSystem::set_size_of_star_system(int size_of_star_system) {
    this->size_of_star_system = size_of_star_system;
}

void StarSystem::set_gravitial_mass(double gravitial_mass) {
    this->gravitial_mass = gravitial_mass;
}

void StarSystem::set_luminosity(double luminosity) {
    this->luminosity = luminosity;
}

void StarSystem::set_temperature(double temperature) {
    this->temperature = temperature;
}

void StarSystem::set_age(double age) {
    this->age = age;
}

void StarSystem::set_metallicity(double metallicity) {
    this->metallicity = metallicity;
}

void StarSystem::set_gravitial_pull(double gravitial_pull) {
    this->gravitial_pull = gravitial_pull;
}

void StarSystem::set_radiation(double radiation) {
    this->radiation = radiation;
}

void StarSystem::set_magnetic_field(double magnetic_field) {
    this->magnetic_field = magnetic_field;
}

void StarSystem::set_solar_wind(double solar_wind) {
    this->solar_wind = solar_wind;
}

void StarSystem::add_planet(Planet *planet) {
    this->planets.push_back(planet);
}

void StarSystem::remove_planet(Planet *planet) {
    auto it = std::ranges::remove(this->planets, planet);
    (void)this->planets.erase(it.begin(), it.end());
}

std::string StarSystem::get_designation() {
    return this->designation;
}

std::string StarSystem::get_name() {
    return this->name;
}

int StarSystem::get_distance_from_earth() {
    return this->distance_from_earth;
}

int StarSystem::get_size_of_star_system() {
    return this->size_of_star_system;
}

double StarSystem::get_gravitial_mass() {
    return this->gravitial_mass;
}

double StarSystem::get_luminosity() {
    return this->luminosity;
}

double StarSystem::get_temperature() {
    return this->temperature;
}

double StarSystem::get_age() {
    return this->age;
}

double StarSystem::get_metallicity() {
    return this->metallicity;
}

double StarSystem::get_gravitial_pull() {
    return this->gravitial_pull;
}

double StarSystem::get_radiation() {
    return this->radiation;
}

double StarSystem::get_magnetic_field() {
    return this->magnetic_field;
}

double StarSystem::get_solar_wind() {
    return this->solar_wind;
}

std::vector<Planet *> StarSystem::get_planets() {
    return this->planets;
}

std::vector<std::vector<__resharper_unknown_type>> StarSystem::get_star_system_grid() {
    return this->star_system_grid;
}

void StarSystem::display() {
    std::cout << "Designation: " << this->designation << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Distance from Earth: " << this->distance_from_earth << std::endl;
    std::cout << "Size of Star System: " << this->size_of_star_system << std::endl;
    std::cout << "Gravitial Mass: " << this->gravitial_mass << std::endl;
    std::cout << "Luminosity: " << this->luminosity << std::endl;
    std::cout << "Temperature: " << this->temperature << std::endl;
    std::cout << "Age: " << this->age << std::endl;
    std::cout << "Metallicity: " << this->metallicity << std::endl;
    std::cout << "Gravitial Pull: " << this->gravitial_pull << std::endl;
    std::cout << "Radiation: " << this->radiation << std::endl;
    std::cout << "Magnetic Field: " << this->magnetic_field << std::endl;
    std::cout << "Solar Wind: " << this->solar_wind << std::endl;
    std::cout << "Planets: " << std::endl;
    for (auto& planet : this->planets) {
        planet->display();
    }
}
