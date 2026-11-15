#include <iostream>

void countEvenOdd(int size, int arr[], int &evenCount, int &oddCount);

int main()
{
    int arr[100];
    int evenCount = 0;
    int oddCount = 0;
    int size;

    std::cout << "Enter the size of element: ";
    std::cin >> size;

    if (size > 0 && size <= 100)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "Enter element at " << i + 1 << " ";
            std::cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << '\n';
        countEvenOdd(size, arr, evenCount, oddCount);
        std::cout << "Number of even numbers is " << evenCount << '\n';
        std::cout << "Number of odd numbers is " << oddCount;
    }

    return 0;
}

void countEvenOdd(int size, int arr[], int &evenCount, int &oddCount)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
}