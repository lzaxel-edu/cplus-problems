#include <iostream>
void onFailedInput();

void print_square(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void print_hollow_square(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

void print_triange_left_right(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void print_triangle_left_right_inverted(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void print_triangle_right_left(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i-1)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
}

void print_triangle_right_left_inverted(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

void print_rhombus(int n)
{
    for (int i = 0; i < n*2; i++)
    {
        for (int j = 0; j < n*2-1; j++)
        {
            if (
                (i <= n && j > n - i - 1 && j < n + i - 1) ||
                (i > n && j >= i-n && j < n*2 - i%n -1)
                )
                std::cout << "*";
            else std::cout << " ";
        }

        std::cout << "\n";
    }

}

void problem30()
{
    std::cout << "Enter number: ";

    int n;
    std::cin >> n;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    print_square(n);
    std::cout << "\n";
    print_hollow_square(n);
    std::cout << "\n";
    print_triange_left_right(n);
    std::cout << "\n";
    print_triangle_left_right_inverted(n);
    std::cout << "\n";
    print_triangle_right_left(n);
    std::cout << "\n";
    print_triangle_right_left_inverted(n);
    std::cout << "\n";
    print_rhombus(n);
}