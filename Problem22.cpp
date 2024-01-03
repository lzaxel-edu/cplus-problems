#include <iostream>
void onFailedInput();

void problem22()
{
    std::cout << "Enter start fund (k>0): ";
    float k;
    std::cin >> k;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    std::cout << "Enter percent of monthly income (p>=0): ";
    float p;
    std::cin >> p;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    std::cout << "Enter how much money you need (s>0): ";
    float s;
    std::cin >> s;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    if (k < 0 || p < 0 || s < 0 || s < k)
    {
        std::cout << "Invalid numbers entered\n";
        return;
    }

    int m = 0;
    while (k < s)
    {
        k += k * (p / 100);
        m++;

        std::cout << "\nMonth " << m << " = " << k;
    }
    
    std::cout << "\nYou'll reach money goal in " << m << " month(s)\n";
}