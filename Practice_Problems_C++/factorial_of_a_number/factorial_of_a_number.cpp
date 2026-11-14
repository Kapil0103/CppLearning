#include <iostream>

// Function prototype
int Factorial(int);

int main()
{
    // Declare variables
    int n;

    // Take input
    std::cout << "Enter the number u eant factorial of: ";
    std::cin >> n;
if (n < 0){
    std::cout << "number is negative please enter a positive number";
}
else {
        // Call function
    int result = Factorial(n);
    std::cout << "Factorial of " << n << " is " << result;
    // Display result
    // Print result here
}


    return 0;
}

// Function definition
int Factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    // Return result if required
    return fact;
}

