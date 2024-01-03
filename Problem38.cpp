#include <iostream>
void onFailedInput();

void problem38()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i * j < 10)
                std::cout << " " << i * j << "  ";
            else
                std::cout << i * j << "  ";
        }
        
        std::cout << "\n";
    }
}