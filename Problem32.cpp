#include <iostream>
void onFailedInput();

void problem32()
{
    std::cout << "Enter number: ";

    int n;
    std::cin >> n;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    if (n <= 0)
    {
        std::cout << "Number should be > 0\n";
        return;
    }

    for (int i = 2; i < n; i++)
    {
        bool flag = true;

        for (int j = i - 1; j >= 2; j--)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            std::cout << i << '\n';
        }
    }
}