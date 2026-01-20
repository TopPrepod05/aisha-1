#pragma once
#include <iostream>

class Form {
public:
    static void GetForm() {
        std::string name, email;
        std::cout << "Enter your name: "; std::cin >> name;
        std::cout << "Enter your email: "; std::cin >> email;
        std::cout << "\n";
        std::cout << "You name: " << name << "\nYour Mail: " << email;
    }
};