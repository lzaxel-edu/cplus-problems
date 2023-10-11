#include <iostream>

void onFailedInput();

void problem5()
{
    int a;
    std::cout << "Check if number is even and two-digit.\nPlease type a number: ";

    std::cin >> a;

    if (std::cin.fail())
    {
        onFailedInput();

        return;
    }

    if ((a % 2 == 0) && ((a >= 10 && a < 100) || (a >= -99 && a <= -10)))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
}
