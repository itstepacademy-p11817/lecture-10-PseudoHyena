#include <iostream>

int main() {
	int ab_distance;
	int bc_distance;
	int weight;

	std::cout << "Input a distance from A to B: ";
	std::cin >> ab_distance;
	std::cout << "Input a distance from B to C: ";
	std::cin >> bc_distance;
	std::cout << "Input a weight: ";
	std::cin >> weight;

	if (weight >= 0 && weight < 500) {
		if (ab_distance < 300) {
			if (bc_distance < 300) {
				if (300 - ab_distance >= bc_distance) {
					std::cout << 0;
				}
				else {
					std::cout << bc_distance - (300 - ab_distance);
				}
			}
		}
		else {
			std::cout << "Impossible!";
		}
	}
	else if (weight >= 500 && weight < 1000) {
		if (ab_distance * 4 < 300) {
			if (bc_distance * 4 < 300) {
				if (300 - ab_distance * 4>= bc_distance * 4) {
					std::cout << 0;
				}
				else {
					std::cout << bc_distance * 4 - (300 - ab_distance * 4);
				}
			}
		}
		else {
			std::cout << "Impossible!";
		}
	}
	else if (weight >= 1000 && weight < 1500) {
		if (ab_distance * 7 < 300) {
			if (bc_distance * 7 < 300) {
				if (300 - ab_distance * 7 >= bc_distance * 7) {
					std::cout << 0;
				}
				else {
					std::cout << bc_distance * 7 - (300 - ab_distance * 7);
				}
			}
		}
		else {
			std::cout << "Impossible!";
		}
	}
	else if (weight >= 1500 && weight < 2000) {
		if (ab_distance * 9 < 300) {
			if (bc_distance * 9 < 300) {
				if (300 - ab_distance * 9 >= bc_distance * 9) {
					std::cout << 0;
				}
				else {
					std::cout << bc_distance * 9 - (300 - ab_distance * 9);
				}
			}
		}
		else {
			std::cout << "Impossible!";
		}
	}
	else {
		std::cout << "Impossible!";
	}

	std::cout << std::endl;
	system("pause");
	return 0;
}
