#include <iostream>
#include <cmath>

void onFailedInput();

void problem14()
{
    int year;
    std::cout << "Check if year is leap.\nPlease type a year in [1600;2100].\n";

    std::cout << "Year=";
    std::cin >> year;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    if (!(year >= 1600 && year <= 2100))
    {
        std::cout << "Error! Year must be in [1600;2100].\n";
        return;
    }

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            std::cout << "YES\n";
            return;
        }
    } else {
        if (year % 4 == 0)
        {
            std::cout << "YES\n";
            return;
        }
    }
    std::cout << "NO\n";
}
