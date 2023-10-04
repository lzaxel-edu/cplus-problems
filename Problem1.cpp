#include <iostream>

void onFailedInput();
int onceMore();

int problem1()
{
    int x, y;
    std::cout << "Sum 2 whole numbers. Please type 2 numbers." << std::endl;

    std::cin >> x >> y;

    if (std::cin.fail())
    {
        onFailedInput();

        return problem1();
    }

    printf("%d+%d=%d\n", x, y, x + y);

    if (onceMore())
    {
        problem1();
    }
}
