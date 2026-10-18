#include <iostream>

int main() {
    // ternary operator ?: = replacement to an if/else statement
    //condition ? experssion1 : expression2;
    
    // int grade = 70;
    // grade >= 60 ? std::cout << "you pass!" : std::cout << "you fail!";

    // int number = 9;
    // number % 2 == 1 ? std::cout << "odd" : std::cout << "even";

    bool hungry = true;
    // hungry == true ?
    // hungry ? std::cout << "you are hungry" : std::cout << "you are not hungry";
    std::cout << (hungry ? "You are hungry" : "you are not hungry");

	return 0;
}
