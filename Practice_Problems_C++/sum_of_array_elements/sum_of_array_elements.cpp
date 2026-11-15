#include <iostream>

int calculateSum(int size, int arr[]);

int main()
{
    int arr[100];
    int size;

    std::cout << "Enter the size of array: ";
    std::cin >> size;

    if (size > 0 && size <= 100)
    {

        for (int i = 0; i < size; i++)
        {
            std::cout << "Enter the element at " << i + 1 << " ";
            std::cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << '\n';
        std::cout << calculateSum(size, arr);
    }
    else
    {
        std::cout << "Invalid size of array";
    }

    return 0;
}

int calculateSum(int size, int arr[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}