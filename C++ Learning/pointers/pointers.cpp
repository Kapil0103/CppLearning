#include <iostream>

int main()
{

    // pointers = variables that stores a memory address of another variable
    // sometimes its easire to work with an address
    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza3"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizza;

    std::cout << *pName;
    std::cout << *pAge << '\n';
    std::cout << *pFreePizzas << '\n';

    return 0;
}