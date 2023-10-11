#include <iostream>

void onFailedInput();

void problem2()
{
    int a, b;
    std::cout << "Comparing 2 whole numbers. Please type 2 numbers." << std::endl;

    std::cin >> a;

    if (std::cin.fail())
    {
        onFailedInput();

        return;
    }

    std::cin >> b;

    if (std::cin.fail())
    {
        onFailedInput();

        return;
    }

    if (a > b)
    {
        printf("%d > %d (a > b)\n", a, b);
    }
    else if (a < b)
    {
        printf("%d < %d (a < b)\n", a, b);
    }
    else
    {
        printf("%d = %d (a = b)\n", a, b);
    }
}
