#include <iostream>
#include <string>

void characterFrequency(std::string str);

int main()
{
    std::string str;

    std::cout << "Enter th estring ";
    std::cin >> str;

    int size = str.length();

    if (size > 0 && size <= 100)
    {
        characterFrequency(str);
    }
    else
    {
        std::cout << "Enter smaller string";
    }

    return 0;
}

void characterFrequency(std::string str)
{
    int size = str.length();
    bool visited[100] = {false};

    for (int i = 0; i < size; i++)
    {
        if (visited[i] == false)
        {
            int count = 0;
            for (int j = 0; j < size; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    visited[j] = true;
                }
            }
            std::cout << str[i] << " " << count << '\n';
        }
    }
}