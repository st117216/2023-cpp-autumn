#include <iostream>
int main()
{
	int k = 0;
	int m = 0;
	int n = 0;
	int time = 0;
	std::cin >> k >> m >> n;
	if (n < k) {
		time = 2 * m;
	}
	else {
		time = 2 * n / k * m;
		if (2 * n % k != 0) {
			time = time + m;
		}
	}
	std::cout << time;
	return 0;
}

