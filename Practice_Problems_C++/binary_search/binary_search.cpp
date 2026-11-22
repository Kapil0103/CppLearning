#include <iostream>

int binarySearch(int size, int arr[], int target);

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
        int targetlocation = binarySearch(size, arr, target);

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

int binarySearch(int size, int arr[], int target)
{

    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}