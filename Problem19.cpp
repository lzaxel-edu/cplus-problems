#include <iostream>
void onFailedInput();

void problem19()
{
    int k;
    std::cout << "Please enter age count [1;200]:";

    std::cin >> k;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    if (k < 1 || k > 200)
    {
        std::cout << "Age must be in [1;200]\n";
        return;
    }

    if (k >= 100 && (k%100 >= 11 && k%100 <= 14))
    {
        std::wcout << L"Ему " << k << L" лет\n";
        return;
    }
    int lastNum = k % 10;
    if (lastNum == 0 || (lastNum >= 5 && lastNum <= 9))
    {
        std::wcout << L"Ему " << k << L" лет\n";
    } else if (lastNum == 1)
    {
        std::wcout << L"Ему " << k << L" год\n";
    } else
    {
        std::wcout << L"Ему " << k << L" года\n";
    }
}
