#include <iostream>

int main() {
    
    //sizeof() = determines the size in bytes of a :
    //           variables, data type, class, objects, etc.

    std::string name = "Bro";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Kapil", "Squidword", "Babloo"};

    // std::cout << sizeof(gpa) << " bytes\n"; 
    // std::cout << sizeof(name) << " bytes\n";
    // std::cout << sizeof(grade) << " bytes\n";
    // std::cout << sizeof(student) << " bytes\n";
    // std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";


    return 0;
}