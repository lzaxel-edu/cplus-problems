#include <iostream>
#include <cmath>
void onFailedInput();

void problem33()
{
    std::cout << "Enter N: ";
    int n;
    std::cin >> n;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }
    if (n <= 0)
    {
        std::cout << "N should be > 0\n";
        return;
    }

    std::cout << "Enter X: ";
    double x;
    std::cin >> x;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    double s = 0;
    for (int i = 1; i < n + 1; i++)
    {
        long f = 1;
        for (int j = 1; j <= 2*i - 1; j++)
        {
            f *= j;
        }
        double a = pow(x, (2 * i - 1)) / f;
        if (i % 2 == 0) a = -a;

        s += a;
    }
    std::cout << "Sum = " << s << '\n';
}