#include <iostream>
void onFailedInput();

void problem25()
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
        std::cout << "Number should be >= 0\n";
        return;
    }

    // если тут надо было ещё и отрицательные выводить, то это уже ржака конечно
    for (int a = 1; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                if (a+b+c < n)
                {
                    std::cout << a << b << c << "\n";
                }
            }
        }
    }
}