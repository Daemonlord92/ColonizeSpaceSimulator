//
// Created by Legio on 3/21/2025.
//

#pragma once
#include <string>

namespace entities {

class Food {
public:
    Food(
        std::string name,
        int calories,
        int weight,
        int volume,
        int price,
        int quantity,
        int quality,
        int freshness,
        int taste
        );
    ~Food() = default;
    void set_name(std::string_view name);
    void set_calories(int calories);
    void set_weight(int weight);
    void set_volume(int volume);
    void set_price(int price);
    void set_quantity(int quantity);
    void set_quality(int quality);
    void set_freshness(int freshness);
    void set_taste(int taste);
    [[nodiscard]] std::string get_name() const;
    [[nodiscard]] int get_calories() const;
    [[nodiscard]] int get_weight() const;
    [[nodiscard]] int get_volume() const;
    [[nodiscard]] int get_price() const;
    [[nodiscard]] int get_quantity() const;
    [[nodiscard]] int get_quality() const;
    [[nodiscard]] int get_freshness() const;
    [[nodiscard]] int get_taste() const;
    void display() const;

private:
    std::string name;
    int calories;
    int weight;
    int volume;
    int price;
    int quantity;
    int quality;
    int freshness;
    int taste;
};

} // entities

