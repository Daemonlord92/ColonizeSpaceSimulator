//
// Created by Legio on 3/19/2025.
//

#include "Planet.h"

#include <iostream>

Planet::Planet(std::string *designation, std::string *name, int *population, int *size, int *distance_from_star,
               int *distance_from_earth, Human *leader) {
    this->designation = designation;
    this->name = name;
    this->population = population;
    this->size = size;
    this->distance_from_star = distance_from_star;
    this->distance_from_earth = distance_from_earth;
    this->leader = leader;
}

Planet::~Planet() = default;

void Planet::set_designation(std::string *designation) {
    this->designation = designation;
}

void Planet::set_name(std::string *name) {
    this->name = name;
}

void Planet::set_population(int *population) {
    this->population = population;
}

void Planet::set_size(int *size) {
    this->size = size;
}

void Planet::set_distance_from_star(int *distance_from_star) {
    this->distance_from_star = distance_from_star;
}

void Planet::set_distance_from_earth(int *distance_from_earth) {
    this->distance_from_earth = distance_from_earth;
}

void Planet::set_leader(Human *leader) {
    this->leader = leader;
}

std::string Planet::get_designation() {
    return *this->designation;
}

std::string Planet::get_name() {
    return *this->name;
}

int Planet::get_population() {
    return *this->population;
}

int Planet::get_size() {
    return *this->size;
}

int Planet::get_distance_from_star() {
    return *this->distance_from_star;
}

int Planet::get_distance_from_earth() {
    return *this->distance_from_earth;
}

Human Planet::get_leader() {
    return *this->leader;
}

void Planet::display() {
    std::cout << "Designation: " << this->designation << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Population: " << this->population << std::endl;
    std::cout << "Size: " << this->size << std::endl;
    std::cout << "Distance from star: " << this->distance_from_star << std::endl;
    std::cout << "Distance from Earth: " << this->distance_from_earth << std::endl;
}
