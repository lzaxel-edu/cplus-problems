#include <iostream>

void problem24()
{
    const int NUMBERS_COUNT = 10;

    srand((int)time(NULL));
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < NUMBERS_COUNT; i++)
        {
            int random_num = rand() % 10;
            sum += random_num;

            std::cout << random_num << " ";
        }

        std::cout << "Avg = " << sum / (float)NUMBERS_COUNT << "\n";
    }
}