#include <iostream>

void findLargestSmallest(int size, int arr[]);
int main()
{
    int arr[100];
    int size;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    // int size = sizeof(arr) / sizeof(arr[0]);not needed
    if (size > 0 && size <= 100)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "Enter element " << i + 1 << ": ";
            std::cin >> arr[i];
        }

        std::cout << "Array Elements: ";
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << '\n';
        findLargestSmallest(size, arr);
    }
    else
    {
        std::cout << "invalid array size";
    }

    return 0;
}
void findLargestSmallest(int size, int arr[])
{
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        else if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    std::cout << largest << " is the largest element" << '\n';
    std::cout << smallest << " is the smallest element";
}
