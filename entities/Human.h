#pragma once
    #include <string>
    #include <chrono>
    #include <memory>

    namespace entities {

    class Human : public std::enable_shared_from_this<Human> {
        std::string name;
        std::chrono::year_month_day birthday;
        std::string gender;
        std::string occupation;
        int age{};
        int height;
        int weight;
        int health;
        int hunger;
        int salary;
        int iq;
        int eq;
        int strength;
        int intution;
        int charisma;
        Human* bondmate{};

    public:
        Human(
            std::string name,
            const std::chrono::year_month_day &birthday,
            std::string gender,
            int height,
            int weight,
            std::string occupation,
            int salary,
            int iq,
            int eq,
            int strength,
            int intution,
            int charisma
        );
        ~Human() = default;
        void set_name(const std::string_view &name);
        void set_birthday(const std::chrono::year_month_day &birthday);
        void set_gender(const std::string_view &gender);
        void set_height(int height);
        void set_weight(int weight);
        void set_hunger(int hunger);
        void set_occupation(const std::string_view &occupation);
        void set_salary(int salary);
        void set_iq(int iq);
        void set_eq(int eq);
        void set_strength(int strength);
        void set_intution(int intution);
        void set_charisma(int charisma);
        void set_bondmate(Human* bondmate);
        std::string get_name() const;
        int get_age() const;
        std::chrono::year_month_day get_birthday() const;
        std::string get_gender();
        int get_height() const;
        int get_weight() const;
        int get_health() const;
        int get_hunger() const;
        std::string get_gender() const;
        std::string get_occupation() const;
        int get_salary() const;
        int get_iq() const;
        int get_eq() const;
        int get_strength() const;
        int get_intution() const;
        int get_charisma() const;
        Human* get_bondmate() const;
        void display() const;

    };

    } // namespace my_namespace