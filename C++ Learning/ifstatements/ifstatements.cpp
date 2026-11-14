#include <iostream>

int main()
{

    // if statements = do something if a condition is true.
    //                if not, then dont do it

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= 100)
    {
        std::cout << "you are too old  ";
    }
    else if (age >= 18)
    {
        std::cout << "Welcome to the site!";
    }
    else if (age < 0)
    {
        std::cout << " you havent been born yet";
    }

    else
    {
        std::cout << "your are not enough old to enter !";
    }

    return 0;
}
