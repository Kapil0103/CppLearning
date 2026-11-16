#include <iostream>

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

        int i = 0;
        int j = size - 1;
        int temp;
        while (i < j)
        {

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }

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