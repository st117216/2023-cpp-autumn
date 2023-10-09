#include <iostream>
#include<cstdlib>
int main()
{
	std::cout << "Введите размер массива" << std::endl;
	int n = 0;
	int min = 0;
	int max = 0;
	int k_min = 0;
	int k_max = 0;
	std::cin >> n;
	int* mass = (int*)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		std::cin >> *(mass + i);
	}
	min = *(mass);
	max = *(mass);
	for (int i = 1; i < n; i++) {
		if (min > *(mass + i)) {
			min = *(mass + i);
			k_min = i;
		}
		if (max <= *(mass + i)) {
			max = *(mass + i);
			k_max = i;
		}
	}
	*(mass + k_min) = max;
	*(mass + k_max) = min;
	for (int i = 0; i < n; i++) {
		std::cout << *(mass + i) << " ";
	}
	free(mass);
	return 0;
}