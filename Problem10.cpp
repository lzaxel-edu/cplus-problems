#include <iostream>

void onFailedInput();

void problem10()
{
    int num, d1, d2, d3, d4;
    std::cout << "Check digits of the number(4-digit) form a sequence?.\nPlease type a number:";

    std::cin >> num;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }
    num = abs(num);
    if ((num / 10000 != 0) || (num / 1000 == 0))
    {
        std::cout << "Input number must be a 4-digit\n";
        return;
    }

    d1 = num / 1000;
    d2 = num / 100 % 10;
    d3 = num / 10 % 10;
    d4 = num % 10;

    if (d1 == d2 && d2 == d3 && d3 == d4)
    {
        std::cout << "Yes, const\n";
    } else if (d1 > d2 && d2 > d3 && d3 > d4)
    {
        std::cout << "Yes, dec\n";
    } else if (d1 >= d2 && d2 >= d3 && d3 >= d4)
    {
        std::cout << "Yes, not inc\n";
    } else if (d1 < d2 && d2 < d3 && d3 < d4)
    {
        std::cout << "Yes, inc\n";
    } else if (d1 <= d2 && d2 <= d3 && d3 <= d4)
    {
        std::cout << "Yes, not dec\n";
    } else
    {
        std::cout << "No\n";
    }
}
