#include <iostream>
void onFailedInput();

void problem29()
{
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j <= 7; j++)
        {
            if ((i + j) % 2 != 0)
            {
                std::cout << "■";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}