#include <iostream>
#include "random_value.h"

int check_value() {

	const int target_value = random_value();
	int current_value = 0;
	//bool not_win = true;
	int counter=0;

	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;

		if (current_value < target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else if (current_value > target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
			std::cout << "you win!" << std::endl;
			break;
		}
		++counter;

	} while(true);

	return counter;
}