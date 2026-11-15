#include <iostream>
#include <limits>

// Function prototype
bool isPalindrome(long long n);

int main()
{
    // Declare variables
    long long n;

    std::cout << "Enter the number u want to check if it a palindrome: ";
    std::cin >> n;

    if (n < 0)
    {
        std::cout << n << " is not a Palindrome";
    }
    else
    {
        if (isPalindrome(n))
        {
            std::cout << n << " is a Palindrome";
        }
        else
        {
            std::cout << n << " is not a Palindrome";
        }
    }

    return 0;
}

// Function definition
bool isPalindrome(long long n)
{
    long long reversedNumber = 0;
    long long digit;
    long long originalNumber = n;

    while (n > 0)
    {
        digit = n % 10;
        if (reversedNumber > (std::numeric_limits<long long>::max() - digit) / 10)
        {
            return false;
        }
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }
    if (reversedNumber == originalNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}
