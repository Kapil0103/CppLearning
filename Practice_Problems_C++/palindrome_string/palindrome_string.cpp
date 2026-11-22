#include <iostream>
#include <string>

bool isPalindrome(std::string str);

int main()
{
    std::string str;

    std::cout << "Enter the string to check palindrome ";
    std::cin >> str;

    if (isPalindrome(str))
    {
        std::cout << "Palindrome";
    }
    else
    {
        std::cout << "Not a palindrome";
    }

    return 0;
}

bool isPalindrome(std::string str)
{
    int i = 0;
    int size = str.length();
    int j = size - 1;
    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}