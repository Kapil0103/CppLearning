#include <iostream>

void PrintEvenNumbersTillN(int n);

int main() {
    
    int n;

    std::cout << "enter the number u want to print even numbers till: ";
    std::cin >> n;

    PrintEvenNumbersTillN(n);

    return 0;
}

void PrintEvenNumbersTillN(int n){
    for (int i = 2; i <= n; i+=2)
    {
        if (i % 2 == 0)
        {
            std::cout << i << '\n';
        }
        
    }
    
}