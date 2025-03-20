#include "Human.h"
#include <iostream>
#include <utility>

namespace my_namespace {

Human::Human(std::string name, const std::chrono::year_month_day &birthday, const std::string &gender, int height, int weight,
    const std::string &occupation, int salary, int iq, int eq, int strength, int intution, int charisma)
    : name(std::move(name)), birthday(birthday), gender(gender), height(std::make_shared<int>(height)), weight(std::make_shared<int>(weight)), health(std::make_shared<int>(100)),
      hunger(std::make_shared<int>(1)), occupation(occupation), salary(std::make_shared<int>(salary)), iq(std::make_shared<int>(iq)), eq(std::make_shared<int>(eq)), strength(std::make_shared<int>(strength)), intution(std::make_shared<int>(intution)), charisma(
          std::make_shared<int>(charisma)) {
}

void Human::set_name(const std::string &name) {
    this->name = name;
}

void Human::set_birthday(const std::chrono::year_month_day &birthday) {
    this->birthday = birthday;
}

void Human::set_gender(const std::string &gender) {
    this->gender = gender;
}

void Human::set_height(int height) {
    this->height = std::make_shared<int>(height);
}

void Human::set_weight(int weight) {
    this->weight = std::make_shared<int>(weight);
}

void Human::set_occupation(const std::string &occupation) {
    this->occupation = occupation;
}

void Human::set_salary(int salary) {
    this->salary = std::make_shared<int>(salary);
}

void Human::set_iq(int iq) {
    this->iq = std::make_shared<int>(iq);
}

void Human::set_eq(int eq) {
    this->eq = std::make_shared<int>(eq);
}

void Human::set_strength(int strength) {
    this->strength = std::make_shared<int>(strength);
}

void Human::set_intution(int intution) {
    this->intution = std::make_shared<int>(intution);
}

void Human::set_charisma(int charisma) {
    this->charisma = std::make_shared<int>(charisma);
}

std::string Human::get_name() {
    return name;
}

int Human::get_age() {
    return *age;
}

std::chrono::year_month_day Human::get_birthday() {
    return birthday;
}

std::string Human::get_gender() {
    return gender;
}

int Human::get_height() {
    return *height;
}

int Human::get_weight() {
    return *weight;
}

int Human::get_health() {
    return *health;
}

int Human::get_hunger() {
    return *hunger;
}

std::string Human::get_occupation() {
    return occupation;
}

int Human::get_salary() {
    return *salary;
}

int Human::get_iq() {
    return *iq;
}

int Human::get_eq() {
    return *eq;
}

int Human::get_strength() {
    return *strength;
}

int Human::get_intution() {
    return *intution;
}

int Human::get_charisma() {
    return *charisma;
}

void Human::display() {
    std::cout << "Human name: " << name << std::endl;
    std::cout << "Human age: " << birthday << std::endl;
    std::cout << "Human height: " << height << std::endl;
    std::cout << "Human weight: " << weight << std::endl;
    std::cout << "Human health: " << health << std::endl;
}

void Human::feed() {
}

void Human::work() {
}

void Human::fight() {
}

void Human::research() {
}

void Human::explore() {
}

void Human::heal() {
}

void Human::age_up() {
}

void Human::death() {
}

void Human::bond(Human *human) {
    if (this->bondmate != nullptr) {
        this->bondmate->bondmate = nullptr;
        this->bondmate = human->shared_from_this();
        human->bondmate = this->shared_from_this();
        return;
    }
    this->bondmate = human->shared_from_this();
    human->bondmate = this->shared_from_this();
}

bool Human::sex(const Human *human) {
    if (this->gender == human->gender) {
        std::cout << this->name << " is having sex with " << human->name << " for pleasure!" << std::endl;
        return false;
    }
    return true;
}

} // namespace my_namespace