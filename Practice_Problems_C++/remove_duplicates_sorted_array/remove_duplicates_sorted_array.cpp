#include <iostream>
int removeDuplicate(int size, int arr[]);

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
            std::cout << '\n';
        }

        size = removeDuplicate(size, arr);

        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
    }
    else
    {
        std::cout << "Enter valide array size";
    }

    return 0;
}

int removeDuplicate(int size, int arr[])
{
    int j = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[j - 1] != arr[i])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    return j;
}