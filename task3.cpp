#include <iostream>

int main() {
	double level1;
	double level2;
	double level3;
	double salary1 = 0;
	double salary2 = 0;
	double salary3 = 0;

	std::cout << "level1: ";
	std::cin >> level1;
	std::cout << "level2: ";
	std::cin >> level2;
	std::cout << "level3: ";
	std::cin >> level3;

	if (level1 > 0 && level1 < 500) {
		salary1 = 200 + level1 * 0.03;
	}
	else if (level1 >= 500 && level1 < 1000) {
		salary1 = 200 + level1 * 0.05;
	}
	else if (level1 >= 1000) {
		salary1 = 200 + level1 * 0.08;
	}

	if (level2 > 0 && level2 < 500) {
		salary2 = 200 + level2 * 0.03;
	}
	else if (level2 >= 500 && level2 < 1000) {
		salary2 = 200 + level2 * 0.05;
	}
	else if (level2 >= 1000) {
		salary2 = 200 + level2 * 0.08;
	}
	
	if (level3 > 0 && level3 < 500) {
		salary3 = 200 + level3 * 0.03;
	}
	else if (level3 >= 500 && level3 < 1000) {
		salary2 = 200 + level3 * 0.05;
	}
	else if (level3>= 1000) {
		salary3 = 200 + level3 * 0.08;
	}

	if (salary1 > salary2 && salary1 > salary3) {
		std::cout << "The premium is received by the manager #1!" << std::endl;
		salary1 += 200;
	}
	else if (salary2 > salary1 && salary2 > salary3) {
		std::cout << "The premium is received by the manager #2!" << std::endl;
		salary2 += 200;
	}
	else {
		std::cout << "The premium is received by the manager #3!" << std::endl;
		salary3 += 200;
	}

	std::cout << std::endl;
	std::cout << "            salary:" << std::endl;
	std::cout << "Manager #1: " << salary1 << std::endl;
	std::cout << "Manager #2: " << salary2 << std::endl;
	std::cout << "Manager #3: " << salary3 << std::endl;

	system("pause");
	return 0;
}
