#include <iostream>
void onFailedInput();

void problem26()
{
    for (int i = 100; i <= 999; i++)
    {
        int a1 = i / 100;
        int a2 = i / 10 % 10;
        int a3 = i % 10;

        if (
            (a1 == a2 || a2 == a3 || a1 == a3) &&
            !(a1 == a2 && a2 == a3)
            )
        {
            std::cout << "\n" << i;
        }
    }
    std::cout << "\n";
}