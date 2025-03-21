#include "Human.h"
#include <iostream>
#include <utility>

namespace entities {

Human::Human(std::string name, const std::chrono::year_month_day &birthday, std::string gender, int height, int weight,
    std::string occupation, int salary, int iq, int eq, int strength, int intution, int charisma)
    : name(std::move(name)), birthday(birthday), gender(std::move(gender)), occupation(std::move(occupation)), height(height), weight(weight),
      health(100), hunger(1), salary(salary), iq(iq), eq(eq), strength(strength), intution(intution), charisma(charisma) {
}

void Human::set_name(const std::string_view &name) {
    this->name = name;
}

void Human::set_birthday(const std::chrono::year_month_day &birthday) {
    this->birthday = birthday;
}

void Human::set_gender(const std::string_view &gender) {
    this->gender = gender;
}

void Human::set_height(int height) {
    this->height = height;
}

void Human::set_weight(int weight) {
    this->weight = weight;
}

void Human::set_hunger(int hunger) {
    this->hunger = hunger;
}

void Human::set_occupation(const std::string_view &occupation) {
    this->occupation = occupation;
}

void Human::set_salary(int salary) {
    this->salary = salary;
}

void Human::set_iq(int iq) {
    this->iq = iq;
}

void Human::set_eq(int eq) {
    this->eq = eq;
}

void Human::set_strength(int strength) {
    this->strength = strength;
}

void Human::set_intution(int intution) {
    this->intution = intution;
}

void Human::set_charisma(int charisma) {
    this->charisma = charisma;
}

void Human::set_bondmate(Human *bondmate) {
    this->bondmate = bondmate;
}

std::string Human::get_name() const {
    return name;
}

int Human::get_age() const {
    return age;
}

std::chrono::year_month_day Human::get_birthday() const {
    return birthday;
}

std::string Human::get_gender() {
    return gender;
}

int Human::get_height() const {
    return height;
}

int Human::get_weight() const {
    return weight;
}

int Human::get_health() const {
    return health;
}

int Human::get_hunger() const {
    return hunger;
}

std::string Human::get_gender() const {
    return gender;
}

std::string Human::get_occupation() const {
    return occupation;
}

int Human::get_salary() const {
    return salary;
}

int Human::get_iq() const {
    return iq;
}

int Human::get_eq() const {
    return eq;
}

int Human::get_strength() const {
    return strength;
}

int Human::get_intution() const {
    return intution;
}

int Human::get_charisma() const {
    return charisma;
}

Human * Human::get_bondmate() const {
    return bondmate;
}

void Human::display() const {
    std::cout << "Human name: " << name << std::endl;
    std::cout << "Human age: " << birthday << std::endl;
    std::cout << "Human height: " << height << std::endl;
    std::cout << "Human weight: " << weight << std::endl;
    std::cout << "Human health: " << health << std::endl;
}

}