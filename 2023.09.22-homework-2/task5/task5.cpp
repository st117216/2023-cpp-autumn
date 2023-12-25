#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	if (n % 10 == 0 or (n % 10 >= 5 && n % 10 <= 9) or (n % 100 >= 11 && n % 100 <= 14)) {
		std::cout << n << " bochek";
	}
	else  if (n % 10 == 1) {
		std::cout << n << " bochka";
	}
	else {
		std::cout << n << " bochki";
	}
	return 0;
}

