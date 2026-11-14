#include <iostream>

int main() {

    //&& = check if two conditions are true
    // || = check if at least one of the conditions is true 
    // ! = reverses the logical state of ots operand

    int temp;
    bool sunny = true;

    std::cout << "enter the temperature in degree celcius: ";
    std::cin >> temp;

    // if (temp > 0 && temp < 30){
    //     std::cout << "temp is good";
    // }
    // else {
    //     std::cout << "temperature is bad";
    // }

    
    if (temp <= 0 || temp >= 30){
        std::cout << "temp is bad\n";
    }
    else {
        std::cout << "temperature is good\n";
    }

    if(sunny && temp >= 50){
        std::cout << "it is sunny";
    }
    else{
        std::cout << "it is cloudy";
    }

	return 0;
}
