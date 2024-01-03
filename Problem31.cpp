#include <iostream>
void onFailedInput();

bool input(int *start_time_hour, int *start_time_mins, int *lesson_duration, int *break_duration, int *amount_of_lessons)
{
    std::cout << "Enter start hour: ";
    std::cin >> *start_time_hour;
    if (std::cin.fail())
    {
        onFailedInput();
        return false;
    }

    std::cout << "Enter start mins: ";
    std::cin >> *start_time_mins;
    if (std::cin.fail())
    {
        onFailedInput();
        return false;
    }

    std::cout << "Enter lecture duration (mins): ";
    std::cin >> *lesson_duration;
    if (std::cin.fail())
    {
        onFailedInput();
        return false;
    }

    std::cout << "Enter break duration (mins): ";
    std::cin >> *break_duration;
    if (std::cin.fail())
    {
        onFailedInput();
        return false;
    }

    std::cout << "Enter amount of lessons: ";
    std::cin >> *amount_of_lessons;
    if (std::cin.fail())
    {
        onFailedInput();
        return false;
    }

    return true;
}

void problem31()
{
    int a, a1, b, c, n;
    
    if (!input(&a, &a1, &b, &c, &n)) return;

    if (a < 0 || a1 < 0 || b < 0 || c < 0 || n < 0)
    {
        std::cout << "All numbers should be > 0\n";
        return;
    }

    int start_mins = a * 60 + a1;
    for (int i = 0; i < n; i++)
    {
        int end_mins = start_mins + b;
        if (end_mins >= 24*60)
        {
            end_mins -= 24 * 60;
        }
        std::cout << i << ". " << start_mins / 60 << ":" << start_mins % 60;
        if (start_mins % 60 < 10)
        {
            std::cout << "0";
        }
        std::cout << " - " << end_mins / 60 << ":" << end_mins % 60;
        if (end_mins % 60 < 10)
        {
            std::cout << "0";
        }
        std::cout << "\n";

        start_mins = end_mins + c;
        if (start_mins >= 24*60)
        {
            start_mins -= 24 * 60;
        }
    }
}