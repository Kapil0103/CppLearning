#include <iostream>
#include <ctime>

int main()
{

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "you win bumper sticker\n";
        break;
    case 2:
        std::cout << "you win bumper tshirt\n";
        break;
    case 3:
        std::cout << "you win bumper lunch\n";
        break;
    case 4:
        std::cout << "you win bumper giftcard\n";
        break;
    case 5:
        std::cout << "you win bumper concert tickets\n";
        break;
    }

    return 0;
}