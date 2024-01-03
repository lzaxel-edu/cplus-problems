#include <iostream>
void onFailedInput();

void problem35()
{
    int n = rand() % 1000 + 1;

    bool flag = false;
    std::cout << "Guess a random number between 1 and a 1000: " << '\n';
    for (int i = 0; i < 10; i++)
    {
        int a;
        std::cin >> a;
        if (std::cin.fail())
        {
            onFailedInput();
            return;
        }

        if (a == n)
        {
            std::cout << "You won! The number was: " << n << '\n';
            flag = true;
            break;
        }

        if (a != n)
        {
            if (a < n)
            {
                std::cout << "Number is higher. ";
            }

            if (a > n)
            {
                std::cout << "Number is lower. " ;
            }

            std::cout << "You have " << 10 - (i + 1) << " tries left!" << '\n';
        }
    }

    if (!flag)
    {
        std::cout << "You lost! The number was: " << n << '\n';
    }
}