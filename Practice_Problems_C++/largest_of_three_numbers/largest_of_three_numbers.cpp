#include <iostream>

// Function prototype
int findLargest(int a, int b, int c);

int main()
{
    // Declare variables
    int a;
    int b;
    int c;

    std::cout << "Enter the numbers you want to find largest of three: ";

    // Take input
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    // Call function
    std::cout << findLargest(a, b, c) << " is the maximum number";

    return 0;
}

// Function definition
int findLargest(int a, int b, int c)
{
    // Declare and initialize required variables
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}