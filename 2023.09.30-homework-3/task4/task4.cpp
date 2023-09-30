#include <iostream>
int main()
{
	long a = 0;
	long b = 0;
	long c = 0;
	long d = 0;
	std::cin >> a >> b >> c >> d;
	for (int i = 0; i <= 1000; i++) {
		if (a * (i * i * i) + b * i * i + c * i + d == 0) {
			std::cout << i << ' ';
		}
	}
	return 0;
}