#include <iostream>

int linearSearch(int size, int arr[], int target);

int main()
{
    int size;
    int target;
    int arr[100];

    std::cout << "Enter the size of array ";
    std::cin >> size;

    if (size > 0 && size <= 100)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "Enter the element at " << i + 1 << " ";
            std::cin >> arr[i];
        }
        std::cout << '\n';

        std::cout << "Enter the element to search ";
        std::cin >> target;
        int targetlocation = linearSearch(size, arr, target);

        if (targetlocation == -1)
        {
            std::cout << "element was not found";
        }
        else
        {
            std::cout << targetlocation;
        }
    }
    else
    {
        std::cout << "Array size invalid";
    }

    return 0;
}

int linearSearch(int size, int arr[], int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}