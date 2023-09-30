#include <iostream>
int main()
{
	int N = 0;
	std::cin >> N;
	int res = 1;
	int k = 0;
	while (res < N) {
		res = res * 2;
		k++;
	}
	std::cout << k;
	return 0;
}