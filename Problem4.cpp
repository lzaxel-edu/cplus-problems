#include <iostream>

void onFailedInput();

void problem4()
{
    int a, b, c, d, min1, min2, max;
    std::cout << "Maximum of two minimums (max[min(a,b), min(c,d)]).\nPlease type 4 numbers: ";

    std::cin >> a >> b >> c >> d;

    if (std::cin.fail())
    {
        onFailedInput();

        return;
    }

    min1 = a;
    if (b < a)
    {
        min1 = b;
    }

    min2 = c;
    if (d < c)
    {
        min2 = d;
    }

    max = min1;
    if (min2 > min1)
    {
        max = min2;
    }

    std::cout << "Maximum is " << max << std::endl;
}
