#include <iostream>
void onFailedInput();
void problem21()
{
    std::cout << "Enter number: ";

    int a;
    std::cin >> a;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }
    a = abs(a);

    int counter = 0;
    
    while (a > 0)
    {
        counter++;
        a = a / 10;
    }

    std::cout << "Amount of digits: " << counter << std::endl;
}