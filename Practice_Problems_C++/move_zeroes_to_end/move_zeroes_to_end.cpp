#include <iostream>

void moveZeroesToEnd(int size, int arr[]);

int main()
{
    int size;
    int arr[100];

    std::cout << "Enter the sie of the array";
    std::cin >> size;

    if (size > 0 && size <= 100)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "Enter the element at " << i + 1 << " ";
            std::cin >> arr[i];
        }
        std::cout << '\n';

        moveZeroesToEnd(size, arr);
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
    }
    else
    {
        std::cout << "Array size invalid";
    }

    return 0;
}

void moveZeroesToEnd(int size, int arr[])
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    for (int i = j; i < size; i++)
    {
        arr[i] = 0;
    }
}