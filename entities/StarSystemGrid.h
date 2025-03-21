//
// Created by Legio on 3/21/2025.
//

#pragma once
#include <vector>

#include "Asteroid.h"
#include "Comet.h"
#include "Moon.h"
#include "Planet.h"
#include "Ship.h"
#include "StarStation.h"

namespace entities {

class StarSystemGrid {
    std::vector<StarStation> star_stations_;
    std::vector<Ship> ships_;
    std::vector<Planet> planets_;
    std::vector<Asteroid> asteroids_;
    std::vector<Comet> comets_;
    std::vector<Moon> moons_;

};

} // entities
