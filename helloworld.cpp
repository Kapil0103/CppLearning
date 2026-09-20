#include <iostream>

int main()
{   
    //integer
    int age = 25;
    int x = 5;
    int y = 6;
    int sum = x + y;

    // double
    double price = 10.99;
    double temperature = 2.5;
    double gpa = 2.5;

    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean(true or false) 
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string (objects that represennts a sequence of texts )
    std::string name = "bro";
    std::string day = "friday";
    std::string food = "pizza";
    std::string address = "123 sdhsbd";



    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << "years old";
    

    return 0;
}