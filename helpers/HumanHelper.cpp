//
// Created by Legio on 3/21/2025.
//

#include "HumanHelper.h"

namespace helpers {

    void HumanHelper::feed(entities::Human* human, entities::Food* food) {
        if (human == nullptr || food == nullptr) {
            std::cerr << "HumanHelper::feed: null input" << std::endl;
            return;
        }
        if (food->get_quantity() <= 0) {
            std::cerr << "HumanHelper::feed: invalid quantity" << std::endl;
            return;
        }
        if (human->get_hunger() <= 0) {
            std::cerr << "HumanHelper::feed: invalid hunger" << std::endl;
            return;
        }
        int new_hunger = human->get_hunger() - food->get_calories();
        if (new_hunger < 0) {
            new_hunger = 0;
        }
        human->set_hunger(new_hunger);
    }

    void HumanHelper::work() {
    }

    void HumanHelper::fight() {
    }

    void HumanHelper::research() {
    }

    void HumanHelper::explore() {
    }

    void HumanHelper::heal() {
    }

    void HumanHelper::age_up() {
    }

    void HumanHelper::death() {
    }

    void HumanHelper::train(auto *task) {
    }

    void HumanHelper::bond(const std::shared_ptr<entities::Human> &human1, const std::shared_ptr<entities::Human> &human2) {
        if (human1->get_bondmate() != nullptr) {
            human1->get_bondmate()->set_bondmate(nullptr);
        }
        if (human2->get_bondmate() != nullptr) {
            human2->get_bondmate()->set_bondmate(nullptr);
        }
        human1->set_bondmate(human2.get());
        human2->set_bondmate(human1.get());
    }

    bool HumanHelper::sex(const entities::Human *human1, const entities::Human *human2) {
        if (human1->get_gender() == human2->get_gender()) {
            std::cout << human1->get_name() << " is having sex with " << human2->get_name() << " for pleasure!" << std::endl;
            return false;
        }
        std::cout << human1->get_name() << " is having sex with " << human2->get_name() << " for reproduction!" << std::endl;
        return true;
    }

}

