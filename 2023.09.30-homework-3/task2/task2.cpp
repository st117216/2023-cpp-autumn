#include <iostream>
int main()
{
	long number = 0;
	std::cin >> number;
	while (number % 10 == 0) {
		number = number / 10;
	}
	while (number > 0) {
		std::cout << number % 10;
		number = number / 10;
	}
	return 0;
}