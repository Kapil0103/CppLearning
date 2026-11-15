#include <iostream>

int countOccurence(int size, int arr[], int elementToSearch);

int main()
{
    int size;
    int arr[100];
    int elementToSearch;

    std::cout << "Enter the size of the array ";
    std::cin >> size;

    if (size > 0 && size <= 100)
    {
        std::cout << "Enter the element to search ";
        std::cin >> elementToSearch;

        for (int i = 0; i < size; i++)
        {
            std::cout << "Enter the element at " << i + 1 << " ";
            std::cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i];
        }
        std::cout << '\n';
        std::cout << countOccurence(size, arr, elementToSearch);
    }
    else
    {
        std::cout << "Invalid size or array";
    }

    return 0;
}

int countOccurence(int size, int arr[], int elementToSearch)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elementToSearch)
        {
            count++;
        }
    }
    return count;
}