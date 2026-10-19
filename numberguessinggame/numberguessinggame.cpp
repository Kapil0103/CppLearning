#include <iostream>

int main() {
    
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "number guessing game\n";

    do{
        std::cout << "enter a guess between (1-100)";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "too high\n";
        }
        else if(guess < num){
            std::cout << "too low\n";
        }
        else{
            std::cout << "correct # of tries : " << tries << '\n';
        }
    }while(guess != num);

    return 0;
}