#include <iostream>

void onFailedInput();

void problem12()
{
    int a, b, c;
    std::cout << "Can given numbers be sides of a triangle?.\nPlease type a sides in natural numbers (a,b,c):";

    std::cin >> a >> b >> c;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    if (a < 1 || b < 1 || c < 1)
    {
        std::cout << "All sides must be >= 1\n";
        return;
    }

    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        std::cout << "YES, ";

        if ((a == b) && (a == c))
        {
            std::cout << "equilateral\n";
            return;
        }
        if ((a != b) && (a != c) && (b != c))
        {
            std::cout << "not equilateral";
        } else {
            std::cout << "isosceles";
        }
        if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a))
        {
            std::cout << ", rectangular";
        }
        std::cout << "\n";

    } else {
        std::cout << "NO\n";
    }
}
