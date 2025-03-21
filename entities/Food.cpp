//
// Created by Legio on 3/21/2025.
//

#include "Food.h"

#include <iostream>
#include <ostream>
#include <utility>

namespace entities {
    Food::Food(std::string name, int calories, int weight, int volume, int price, int quantity, int quality,
        int freshness, int taste) : name(std::move(name)), calories(calories), weight(weight), volume(volume), price(price),
    quantity(quantity), quality(quality), freshness(freshness), taste(taste) {
    }

    void Food::set_name(std::string_view name) {
        this->name = name;
    }

    void Food::set_calories(int calories) {
        this->calories = calories;
    }

    void Food::set_weight(int weight) {
        this->weight = weight;
    }

    void Food::set_volume(int volume) {
        this->volume = volume;
    }

    void Food::set_price(int price) {
        this->price = price;
    }

    void Food::set_quantity(int quantity) {
        this->quantity = quantity;
    }

    void Food::set_quality(int quality) {
        this->quality = quality;
    }

    void Food::set_freshness(int freshness) {
        this->freshness = freshness;
    }

    void Food::set_taste(int taste) {
        this->taste = taste;
    }

    std::string Food::get_name() const {
        return name;
    }

    int Food::get_calories() const {
        return calories;
    }

    int Food::get_weight() const {
        return weight;
    }

    int Food::get_volume() const {
        return volume;
    }

    int Food::get_price() const {
        return price;
    }

    int Food::get_quantity() const {
        return quantity;
    }

    int Food::get_quality() const {
        return quality;
    }

    int Food::get_freshness() const {
        return freshness;
    }

    int Food::get_taste() const {
        return taste;
    }

    void Food::display() const {
        std::cout << "Food: " << name << std::endl;
        std::cout << "Food calories: " << calories << std::endl;
        std::cout << "Food weight: " << weight << std::endl;
        std::cout << "Food volume: " << volume << std::endl;
        std::cout << "Food price: " << price << std::endl;
        std::cout << "Food quantity: " << quantity << std::endl;
        std::cout << "Food quality: " << quality << std::endl;
        std::cout << "Food freshness: " << freshness << std::endl;
        std::cout << "Food taste: " << taste << std::endl;
    }
}