#include <iostream>

// Function prototype
int countDigits(long long);

int main()
{
    long long n;

    // Take input
    std::cout << "Enter the number u want to count digits of: ";
    std::cin >> n;

    // Call function
    int digitCount = countDigits(n);
    std::cout << "Number of digits is " << digitCount;

    return 0;
}

// Function definition
int countDigits(long long n)
{
    int count = 1;
    // if (n < 0)
    // {
    //     n *= -1;
    // }

    while (n / 10 > 0 || n / 10 < 0)
    {
        n /= 10;
        count++;
    }

    return count;
}