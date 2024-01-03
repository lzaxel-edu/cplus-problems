#include <iostream>
void onFailedInput();

void problem34()
{
    std::cout << "Enter elements amount: ";

    int k;
    std::cin >> k;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }
    if (k <= 0)
    {
        std::cout << "K should be > 0\n";
        return;
    }
    
    long prev = 1;
    long curr = 1;

    if (k >= 1) std::cout << prev << " ";
    if (k >= 2) std::cout << curr << " ";

    for (int i = 1; i < k-1; i++)
    {
        long long sum = prev + curr;

        prev = curr;
        curr = sum;
        std::cout << sum << " ";
    }

    std::cout << "\n";
}