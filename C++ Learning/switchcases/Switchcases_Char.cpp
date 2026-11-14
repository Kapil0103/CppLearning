#include <iostream>

int main() {

	char grade;

	std::cout << "What letter grade?: ";
	std::cin >> grade;

	switch (grade) {
		case 'a':
			std::cout << "you did great!";
			break;
		case 'b':
			std::cout << "you did good!";
			break;
		case 'c':
			std::cout << "you did ok!";
			break;
		case 'd':
			std::cout << "you did not do good!";
			break;
		case 'e':
			std::cout << "you failed!";
			break;
		default:
			std::cout << "please enter letter grade from a to e" << "\n";
			break;
	}

	return 0;
}
