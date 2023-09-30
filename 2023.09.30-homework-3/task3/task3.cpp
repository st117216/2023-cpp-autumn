#include <iostream>
#include <math.h>
int main()
{
	long number = 0;
	long col = 0;
	std::cin >> number;
	if (number == 1) {
		std::cout << 1;
		return 0;
	}
	for (int i = 1; i <= sqrt(number) + 1; i++) {
		if (number % i == 0) {
			if (i < sqrt(number)) {
				col = col + 2;
			}
			else {
				col++;
			}
		}
	}
	std::cout << col;
	return 0;
}
