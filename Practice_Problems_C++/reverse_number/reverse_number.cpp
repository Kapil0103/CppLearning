#include <iostream>
#include <cstdint>
#include <limits>

// Function prototype
bool reverseNumber(uint64_t, uint64_t &result);

int main()
{
    // Declare variables
    long long n;
    uint64_t reversedNumber1 = 0;

    // Take input
    std::cout << "Enter the number u wish to reverse: ";
    std::cin >> n;

    if (n > 0)
    {
        bool status = reverseNumber(n, reversedNumber1);

        if (status == true)
        {
            std::cout << reversedNumber1;
        }
        else
        {
            std::cout << "the number causes overflow so cannot be reversed";
        }
    }
    else if (n == 0)
    {
        bool status = reverseNumber(0, reversedNumber1);
        std::cout << reversedNumber1;
    }
    else
    {

        uint64_t magnitude = -(n + 1);
        magnitude += 1;
        bool status = reverseNumber(magnitude, reversedNumber1);
        if (status == true)
        {
            std::cout << "-" << reversedNumber1;
        }
        else
        {
            std::cout << "the number causes overflow so cannot be reversed";
        }
    }

    return 0;
}

// Function definition
bool reverseNumber(uint64_t n, uint64_t &result)
{

    uint64_t reversedNumber = 0;
    uint64_t digit;

    while (n > 0)
    {
        digit = n % 10;
        if (reversedNumber > (std::numeric_limits<uint64_t>::max() - digit) / 10)
        {
            return false;
        }

        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }
    result = reversedNumber;
    return true;
}