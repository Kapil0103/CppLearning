#include <iostream>

long long findMissing(int size, int arr[]);

int main()
{
    int size;
    long long n;
    int arr[100];

    std::cout << "Enter the value of N ";
    std::cin >> n;
    if (n >= 2 && n <= 101)
    {
        size = static_cast<int>(n - 1);
        // Continue with your existing logic
    }
    else
    {
        std::cout << "Array size invalid";
    }

    if (size > 0 && size <= 100)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "Enter the element at " << i + 1 << " ";
            std::cin >> arr[i];
        }
        std::cout << '\n';

        long long sumOfN = (n * (n + 1)) / 2;

        long long missing = sumOfN - findMissing(size, arr);
        std::cout << "missing element is " << missing << '\n';
    }
    else
    {
        std::cout << "Array size invalid";
    }

    return 0;
}

long long findMissing(int size, int arr[])
{
    long long sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}