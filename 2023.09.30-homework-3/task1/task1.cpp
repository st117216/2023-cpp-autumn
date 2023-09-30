#include <iostream>
int main()
{
	long N = 0;
	std::cin >> N;
	long i = 1;
	long k = 1;
	while (i <= N) {
		for (int j = 1; j <= k; j++) {
			if (i <= N) {
				std::cout << k << " ";
				i++;
			}
		}
		k++;
	}
	return 0;
}