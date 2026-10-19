#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Enter a string: ";
    std::getline(std::cin, name);

    // if (name.length() > 12)
    // {
    //     std::cout << "Your name cant be over 12 character";
    // }
    // else
    // {
    //     std::cout << "Welcome" << name;
    // }

    // if(name.empty())
    // {
    //     std::cout << "you didnt enter ur name";

    // }
    // else{
    //     std::cout << "hello" << name;
    // }

    // name.clear();

    // std::cout << "hello" << name;

    // name.append("@gmail.com");

    // std::cout << "your username is now" << name;

    // std::cout << name.at(0);

    // name.insert(0, "@");
    // std::cout << "name is " << name;

    // std::cout << name.find(' ');

    name.erase(0, 3);
    std::cout << name; 

    return 0;
}
