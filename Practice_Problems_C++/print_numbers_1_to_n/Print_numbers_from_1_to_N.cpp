#include <iostream>

int main()
{
    int n;

    std::cout << "Enter the number till u want to print numbers";
    std::cin >> n;
    std::cout << '\n';

    for (int i = 1; i <= n; i++)
    {
        std::cout << i << '\n';
    }

    // std::cout << n;
    return 0;
}
