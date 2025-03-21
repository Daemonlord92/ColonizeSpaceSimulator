//
// Created by Legio on 3/21/2025.
//

#pragma once
#include <memory>
#include <iostream>
#include "../entities/Human.h"
#include "../entities/Food.h"


namespace helpers {
class HumanHelper {
public:
    static void feed(entities::Human* human, entities::Food* food);
    void work();
    void fight();
    void research();
    void explore();
    void heal();
    void age_up();
    void death();
    void train(auto* task);

    static void bond(const std::shared_ptr<entities::Human> &human1, const std::shared_ptr<entities::Human> &human2);

    static bool sex(const entities::Human *human1, const entities::Human *human2);

};
}

