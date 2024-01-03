#include <iostream>
void onFailedInput();

void problem28()
{
    std::cout << "Enter number: ";

    int a;
    std::cin >> a;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    if (a <= 0)
    {
        std::cout << "Number should be > 0\n";
        return;
    }

    int x;
    for (int i = 0; i <= 9; i++)
    {
        bool flag = true;
        x = a;
        
        while (x != 0)
        {
            if (x % 10 == i)
            {
                flag = false;
                break;
            }
            x = x / 10;
        }

        if (flag) std::cout << i << "\n";
    }
}