#include <iostream>

void onFailedInput();

int problem2()
{
    int a, b;
    std::cout << "Comparing 2 whole numbers. Please type 2 numbers." << std::endl;

    std::cin >> a >> b;

    if (std::cin.fail())
    {
        onFailedInput();

        return problem2();
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
