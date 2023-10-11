#include <iostream>

void onFailedInput();

void problem1()
{
    int x, y;
    std::cout << "Sum 2 whole numbers. Please type 2 numbers." << std::endl;

    std::cin >> x >> y;

    if (std::cin.fail())
    {
        onFailedInput();

        return;
    }

    if ((std::cin.good() && INT_MAX - x > y))
    {
        printf("%d+%d=%d\n", x, y, x + y);
    }
    else
    {
        std::cout << "Sorry, result is too great\n";
    }

}
