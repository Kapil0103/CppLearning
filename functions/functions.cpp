#include <iostream>

void happyBirthday(std::string birthdayBoy, int age);

int main()
{

    // function = a block of reusable code

    std::string name = "Kapil";
    int age = 21;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string birthdayBoy, int age)
{
    std::cout << "Happy birthday to " << birthdayBoy << '\n';
    std::cout << "Happy birthday to you\n";
    std::cout << "your age is " << age << '\n';
    std::cout << "Happy birthday dear you\n";
    std::cout << "Happy birthday to you\n\n";
}