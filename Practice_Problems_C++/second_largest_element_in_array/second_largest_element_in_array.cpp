#include <iostream>

bool findSecondLargest(int size, int arr[], int &secondLargest);

int main()
{
    int size;
    int arr[100];
    int secondLargest;

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

        if (findSecondLargest(size, arr, secondLargest))
        {
            std::cout << "Second largest element is " << secondLargest;
        }
        else
        {
            std::cout << "no second largest element present";
        }
    }
    else
    {
        std::cout << "invalid size of array";
    }

    return 0;
}

bool findSecondLargest(int size, int arr[], int &secondLargest)
{
    int largest = arr[0];
    bool foundSecondLargest = false;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
            foundSecondLargest = true;
        }
        else if (arr[i] < largest && !foundSecondLargest)
        {
            secondLargest = arr[i];
            foundSecondLargest = true;
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    return foundSecondLargest;
}