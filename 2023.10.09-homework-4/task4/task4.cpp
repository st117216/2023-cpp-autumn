#include <iostream>
#include<cstdlib>
int main()
{
	std::cout << "Введите размер массива" << std::endl;
	int n = 0;
	std::cin >> n;
	int* mass = (int*)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		std::cin >> *(mass + i);
	}
	int max = *(mass);
	for (int i = 0; i < n; i++) {
		if (*(mass + i) > max) {
			max = *(mass + i);
		}
	}
	std::cout << max;
	free(mass);
	return 0;
}