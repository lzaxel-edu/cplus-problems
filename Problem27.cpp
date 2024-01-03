#include <iostream>
void onFailedInput();

void problem27()
{
    std::cout << "Enter a/b (a,b > 0)\n";
    int a,b;
    std::cout << "a:";

    std::cin >> a;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    std::cout << "b:";

    std::cin >> b;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    if (a <= 0 || b <= 0)
    {
        std::cout << "a, b should be > 0\n";
        return;
    }

    if (a == b)
    {
        std::cout << a << "/" << b << "=" << "1" << "\n";
        return;
    }

    int min = 0;
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    for (int i = min; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (b/i == 1)
            {
                std::cout << a << "/" << b << "=" << a / i << "\n";
            } else {
                std::cout << a << "/" << b << "=" << a / i << "/" << b / i << "\n";
            }
            break;
        }
    }
}