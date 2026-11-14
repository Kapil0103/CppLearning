#include <iostream>

int main() {
    
    //array = a data structure that can hold multiple values 
    //        valuse are accesses by index number
    //        "kind of like a variable that holds multiple values"

    std::string cars[3];

    cars[0] = "Camero";
    cars[1] = "mustang";
    cars[2] = "camry";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    


    return 0;
}