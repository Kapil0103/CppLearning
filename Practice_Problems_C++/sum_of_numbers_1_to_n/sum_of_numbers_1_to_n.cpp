#include <iostream>

int CalculateSum(int);

int main()
{
    int n;
    std::cout << "Enter the number u want to print sum of numbers till: ";
    std::cin >> n;

    int result = CalculateSum(n);
    std::cout << result;

    return 0;
}

int CalculateSum(int n)
{

    int Sum = 0;
    for (int i = 1; i <= n; i++)
    {
        Sum += i;
    }
    return Sum;
}