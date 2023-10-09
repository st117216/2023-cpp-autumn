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
	for (int i = 0; i < n; i = i + 2) {
		std::cout << *(mass + i) << " ";
	}
	free(mass);
	return 0;
}