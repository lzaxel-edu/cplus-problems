#include <iostream>

void onFailedInput();

void problem18()
{
    int x;
    double y,  result;

    std::cout << "Please enter unit of measures (1-km, 2-m, 3-dm, 4-cm, 5-mm):";
    std::cin >> x;

    if (std::cin.fail()) {
        onFailedInput();
        return;
    }

    std::cout << "Enter a value:";
    std::cin >> y;

    if (std::cin.fail()) {
        onFailedInput();
        return;
    }

    if (y < 0)
    {
        std::cout << "Value must be >= 0\n";
        return;
    }

    switch (x)
    {
        case 1:
            result = y * 1000;
            std::cout << y << "km" << "=" << result << "m\n";
            break;
        case 2:
            result = y * 1;
            std::cout << y << "m" << "=" << result << "m\n";
            break;
        case 3:
            result = y * 0.1;
            std::cout << y << "dm" << "=" << result << "m\n";
            break;
        case 4:
            result = y * 0.01;
            std::cout << y << "cm" << "=" << result << "m\n";
            break;
        case 5:
            result = y * 0.001;
            std::cout << y << "mm" << "=" << result << "m\n";
            break;
        default:
            std::cout << "Invalid unit type\n";
            return;
    }
}