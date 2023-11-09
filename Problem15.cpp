#include <iostream>
#include <cmath>

void onFailedInput();

void problem15() {
    int input, m, cm, converted;
    double mm;

    std::cout << "Convert inches to metric system.\nPlease type inches (whole numbers, more than 0).\n";

    std::cout << "Inches=";
    std::cin >> input;
    if (std::cin.fail()) {
        onFailedInput();
        return;
    }

    converted = input * 254;

    mm = converted % 1000 / 10.0;
    cm = converted - mm;

    std::cout << "mm=" << mm << " " << "cm=" << cm << std::endl;

}


