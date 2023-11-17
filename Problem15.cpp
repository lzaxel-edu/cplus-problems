#include <iostream>
#include <cmath>

void onFailedInput();

void problem15() {
    int input, m, cm;
    double mm;

    std::cout << "Convert inches to metric system.\nPlease type inches (whole numbers, more than 0).\n";

    std::cout << "Inches=";
    std::cin >> input;
    if (std::cin.fail()) {
        onFailedInput();
        return;
    }

    if (input <= 0)
    {
        std::cout << "Input must be more than 0" << std::endl;
        return;
    }

    mm = input * 25.4;
    cm = mm / 10;
    m = cm / 100;
    mm = mm - cm * 10;
    cm = cm - m * 100;

    std::cout << input << " inches = " << mm <<  "mm " << cm << "cm " << m << "m" << std::endl;

}


