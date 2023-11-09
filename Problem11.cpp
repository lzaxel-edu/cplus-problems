#include <iostream>

void onFailedInput();

void problem11()
{
    int a, b, c, minX, minY, x, y;
    std::cout << "Will a brick fit through a hole?.\nPlease type a brick size (a,b,c):";

    std::cin >> a >> b >> c;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    std::cout << "Please type a hole size (x,y):";

    std::cin >> x >> y;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    if (a >= c && a >= b)
    {
        minX = c;
        minY = b;
    } else if (b >= a && b >= c)
    {
        minX = a;
        minY = c;
    } else
    {
        minX = a;
        minY = b;
    }

    if ((minX < x && minY < y) || (minX < y && minY < x))
    {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}
