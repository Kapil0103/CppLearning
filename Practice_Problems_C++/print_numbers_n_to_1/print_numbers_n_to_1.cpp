#include <iostream>

void PrintNto1(int n);

int main()
{
    int n;

    std::cout << "Enter the number u want to print numbers from n to 1 : ";
    std::cin >> n;
    PrintNto1(n);

    return 0;
}

void PrintNto1(int n)
{
    for (int i = n; i >= 1; i--)
    {
        std::cout << i << '\n';
    }
}
