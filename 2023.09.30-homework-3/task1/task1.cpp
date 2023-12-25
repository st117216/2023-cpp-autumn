#include <iostream>
int main()
{
	long n = 0;
	std::cin >> n;
	long i = 1;
	long k = 1;
	while (i <= n) {
		for (int j = 1; j <= k; j++) {
			if (i <= n) {
				std::cout << k << " ";
				i++;
			}
		}
		k++;
	}
	return 0;
}