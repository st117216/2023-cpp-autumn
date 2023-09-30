#include <iostream>
int main()
{
	int to_run = 0;
	int to_end = 0;
	std::cin >> to_run >> to_end;
	while (to_run != to_end) {
		if ((to_run % 2 == 0) && (to_run / 2 >= to_end)) {
			to_run = to_run / 2;
			std::cout << ":2" << std::endl;
		}
		else {
			to_run = to_run - 1;
			std::cout << "-1" << std::endl;
		}
	}
	return 0;
}