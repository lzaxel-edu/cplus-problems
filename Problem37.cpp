#include <iostream>
void onFailedInput();

void problem37()
{
    std::cout << "Enter number: ";

    int a;
    std::cin >> a;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    if (a < 1 || a > 3999)
    {
        std::cout << "Number must be in range [1, 3999]\n";
        return;
    }


    while (a >= 1000) {
        std::cout << "M";
        a -= 1000;
    }
    while (a >= 900) {
        std::cout << "CM";
        a -= 900;
    }
    while (a >= 500) {
        std::cout << "D";
        a -= 500;
    }
    while (a >= 400) {
        std::cout << "CD";
        a -= 400;
    }
    while (a >= 100) {
        std::cout << "C";
        a -= 100;
    }
    while (a >= 90) {
        std::cout << "XC";
        a -= 90;
    }
    while (a >= 50) {
        std::cout << "L";
        a -= 50;
    }
    while (a >= 40) {
        std::cout << "XL";
        a -= 40;
    }
    while (a >= 10) {
        std::cout << "X";
        a -= 10;
    }
    while (a >= 9) {
        std::cout << "IX";
        a -= 9;
    }
    while (a >= 5) {
        std::cout << "V";
        a -= 5;
    }
    while (a >= 4) {
        std::cout << "IV";
        a -= 4;
    }
    while (a >= 1) {
        std::cout << "I";
        a -= 1;
    }

    std::cout << '\n';
}
