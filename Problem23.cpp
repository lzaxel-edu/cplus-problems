#include <iostream>
void onFailedInput();

void problem23()
{
    std::cout << "Enter sequence of numbers (0 - stop):";

    int current;
    int prev = 0, counter = 0;
    while (true)
    {
        std::cin >> current;
        if (std::cin.fail())
        {
            onFailedInput();
            return;
        }

        if (current == 0) break;

        if (prev * current < 0)
        {
            counter++;
        }
        prev = current;
    }

    std::cout << "Number sign was changed " << counter << " times\n";
}