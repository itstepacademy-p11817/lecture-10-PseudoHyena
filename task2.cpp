#include <iostream>

int main() {
	int day1, day2;
	int month1, month2;
	int year1, year2;

	std::cout << "First date: ";
	std::cin >> day1;
	std::cin >> month1;
	std::cin >> year1;

	std::cout << "second date: ";
	std::cin >> day2;
	std::cin >> month2;
	std::cin >> year2;

	int sum = 0;
	sum += std::abs(year1 - year2) * 365 + std::abs(year1 - year2) / 4;

	int day_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month2 > month1) {
		for (int i = month1; i <= month2; ++i) {
			sum += day_in_month[i - 1];
		}
	}
	else {
		for (int i = month2; i <= month1; ++i) {
			sum += day_in_month[i - 1];
		}
	}
	if (year1 % 4 == 0) sum++;
	if (year2 % 4 == 0) sum++;

	sum += abs(day1 - day2);
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}