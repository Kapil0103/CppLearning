#include <iostream>
#include <string>

int countVowels(std::string str);

int main()
{
    std::string str;

    std::cout << "Enter the string to find number of vowels ";
    std::cin >> str;

    std::cout << "number of vowels is " << countVowels(str);
    return 0;
}

int countVowels(std::string str)
{
    int size = str.length();
    int i = 0;
    int count = 0;

    while (i < size)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
        i++;
    }
    return count;
}