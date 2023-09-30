#include <iostream>
int main()
{
	int k = 0;
	int count = 0;
	int number = 0;
	std::cin >> k;
	int new_num = 0;
	for (int num = 1; num <= k; num++) {
		new_num = 0;
		number = num;
		if ((number % 10) != 0) {
			while (number > 0) {
				new_num = new_num * 10 + number % 10;
				number = number / 10;
			}
			if (new_num == num) {
				count++;
			}
		}
	}
	std::cout << count;
	return 0;
}