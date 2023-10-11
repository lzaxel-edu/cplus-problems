#include <iostream>

void onFailedInput();

void problem3()
{
    int a, b, c, max;
    std::cout << "Max of 3 whole numbers. Please type 3 numbers." << std::endl;

    std::cin >> a >> b >> c;

    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    std::cout << "Maximum is " << max << std::endl;
}
