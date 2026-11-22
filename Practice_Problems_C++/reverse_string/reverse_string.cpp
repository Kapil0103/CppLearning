#include <iostream>
#include <string>

void reverseString(std::string &str);

int main()
{
    std::string str;

    std::cout << "enter the word to reverse ";
    std::cin >> str;
    reverseString(str);

    std::cout << str;

    return 0;
}

void reverseString(std::string &str)
{
    int size = str.length();
    char temp;
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}