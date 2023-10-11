#include <iostream>
#include <limits>

int onceMore()
{
    int onceMore = 0;
    std::cout << "Once more? (1-yes, 0-no)" << std::endl;
    std::cin >> onceMore;
    if (onceMore != 1)
    {
        return 0;
    }

    return 1;
}

void onFailedInput()
{
    std::cout << "Incorrect input, you must to input only whole numbers (from beginning)" << std::endl << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}