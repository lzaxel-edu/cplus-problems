#include <iostream>
#include <iomanip>
void onFailedInput();

void problem39()
{
    std::cout << "Enter K: ";

    int k;
    std::cin >> k;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    int miles = 0;

    std::cout << "| Miles | Km |";

    for (int i = 1; i <= k; i++)
    {
        if (i / 1.6093 < miles)
            std::cout << std::setprecision(4) << "\n " << i / 1.6093 << "\t " << i;
        else {
            std::cout << std::setprecision(4) << "\n " << miles << "\t "<< miles * 1.6093;
            if (i <= k)
            {
                std::cout << std::setprecision(4) << "\n " << i / 1.6093 << "\t " << i;
                miles++;
            }
        }
    }

    std::cout << "\n";
}