#include <iostream>
#include <cmath>

void onFailedInput();

void problem13()
{
    int a, b, c;
    double D, x1, x2, f1, f2;
    std::cout << "Solve quadratic equation f(x)=ax^2+bx+c=0\nPlease type a coefficients (whole numbers).\n";

    std::cout << "a=";
    std::cin >> a;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    std::cout << "b=";
    std::cin >> b;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    std::cout << "c=";
    std::cin >> c;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    D = b*b - 4 * a * c;

    if (D < 0)
    {
        std::cout << "No real roots\n";
        return;
    }

    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);

    std::cout << std::endl << "x1=" << x1 << std::endl << "x2=" << x2 << std::endl;

    f1 = a*(x1*x1) + b*x1 + c;
    f2 = a*(x2*x2) + b*x2 + c;

    std::cout << "f(x1)=" << f1 << std::endl << "f(x2)=" << f2 << std::endl;
}
