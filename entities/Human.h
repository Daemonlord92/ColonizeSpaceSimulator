#pragma once
    #include <string>
    #include <chrono>
    #include <memory>

    namespace my_namespace {

    class Human : public std::enable_shared_from_this<Human> {
        std::string name;
        std::chrono::year_month_day birthday;
        std::string gender;
        std::string occupation;
        std::shared_ptr<int> age;
        std::shared_ptr<int> height;
        std::shared_ptr<int> weight;
        std::shared_ptr<int> health;
        std::shared_ptr<int> hunger;
        std::shared_ptr<int> salary;
        std::shared_ptr<int> iq;
        std::shared_ptr<int> eq;
        std::shared_ptr<int> strength;
        std::shared_ptr<int> intution;
        std::shared_ptr<int> charisma;
        std::shared_ptr<Human> bondmate;

    public:
        Human(
            std::string name,
            const std::chrono::year_month_day &birthday,
            const std::string &gender,
            int height,
            int weight,
            const std::string &occupation,
            int salary,
            int iq,
            int eq,
            int strength,
            int intution,
            int charisma
        );
        ~Human() = default;
        void set_name(const std::string &name);
        void set_birthday(const std::chrono::year_month_day &birthday);
        void set_gender(const std::string &gender);
        void set_height(int height);
        void set_weight(int weight);
        void set_occupation(const std::string &occupation);
        void set_salary(int salary);
        void set_iq(int iq);
        void set_eq(int eq);
        void set_strength(int strength);
        void set_intution(int intution);
        void set_charisma(int charisma);
        std::string get_name();
        int get_age();
        std::chrono::year_month_day get_birthday();
        std::string get_gender();
        int get_height();
        int get_weight();
        int get_health();
        int get_hunger();
        std::string get_occupation();
        int get_salary();
        int get_iq();
        int get_eq();
        int get_strength();
        int get_intution();
        int get_charisma();
        void display();
        void feed();
        void work();
        void fight();
        void research();
        void explore();
        void heal();
        void age_up();
        void death();
        void train(auto* task);
        void bond(Human* human);
        bool sex(const Human* human);
    };

    } // namespace my_namespace