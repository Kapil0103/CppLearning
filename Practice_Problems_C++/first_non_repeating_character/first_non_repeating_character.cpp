#include <iostream>
#include <string>

char firstNonRepeating(std::string str);

int main()
{
    std::string str;

    std::cout << "Enter the string to find first non repeating character ";
    std::cin >> str;
    char result = firstNonRepeating(str);

    if (result == '\0')
    {
        std::cout << "Doesn't exist";
    }
    else
    {
        std::cout << result;
    }
    return 0;
}

char firstNonRepeating(std::string str)
{
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count == 1)
        {

            return str[i];
        }
    }
    return 0;
}