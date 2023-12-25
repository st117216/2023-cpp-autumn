#include <iostream>
int main()
{
	int n = 0;
	std::cin >> n;
	int res = 1;
	int k = 0;
	while (res < n) {
		res = res * 2;
		k++;
	}
	std::cout << k;
	return 0;
}