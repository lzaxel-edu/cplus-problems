#include <iostream>
#include <chrono>
#include <ctime>
void onFailedInput();

void problem36()
{
    srand((int)time(NULL));
    int counter = 0;

    std::cout << "Solve 10 problems from multiplication table" << '\n';

    auto start = std::chrono::system_clock::now();

    for (int i = 0; i < 10; i++)
    {
        int n = rand() % 8 + 2;
        int r = rand() % 8 + 2;
        std::cout << n << '*' << r << " = ?" << '\n';
        int a;
        std::cin >> a;
        if (a == n * r)
        {
            counter++;
        }
    }
    if (counter == 10)
    {
        std::cout << "Perfect" << '\n';
    }
    else if (counter == 9)
    {
        std::cout << "Good" << '\n';
    }
    else if (counter >= 7)
    {
        std::cout << "Fine" << '\n';
    }
    else
    {
        std::cout << "Failed" << '\n';
    }

    auto end = std::chrono::system_clock::now();
    double time = (end - start).count() / 1000000000.0;
    std::cout << "Сorrect answers: " << counter << '\n';
    std::cout << "Time taken: " << time << "s\n";
}