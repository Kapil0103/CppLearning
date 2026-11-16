#include <iostream>

bool isSorted(int size, int arr[]);

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
        if (isSorted(size, arr))
        {
            std::cout << "Array sorted";
        }
        else
        {
            std::cout << "Array not sorted";
        }
    }
    else
    {
        std::cout << "Array size invalid";
    }

    return 0;
}

bool isSorted(int size, int arr[])
{

    int i = 0;

    while (i < size - 1)
    {

        if (arr[i] <= arr[i + 1])
        {
            i++;
        }
        else
        {

            return false;
        }
    }

    return true;
}