#include <iostream>
#include <malloc.h>
#include<cstdlib>
int main()
{
	std::cout << "Введите размер массива" << std::endl;
	int n = 0;
	std::cin >> n;
	int* mass = (int*)malloc(sizeof(int*) * n);
	int* new_mass = NULL;
	int* test;
	int k = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> *(mass + i);
	}
	std::cout << _msize(mass) << std::endl;
	for (int i = 0; i < n; i++) {
		if (*(mass + i) >= 0) {
			k++;
			test = (int*)realloc(new_mass, k * (sizeof(int)));
			if (test != NULL) {
				new_mass = test;
				int h = *(mass + i);
				*(new_mass + (k - 1)) = h;
			}
		}
	}
	free(mass);
	mass = new_mass;
	for (int i = 0; i < k; i++) {
		std::cout << *(mass + i) << " ";
	}
	std::cout << std::endl;
	std::cout << _msize(mass) << std::endl;
	free(new_mass);
	return 0;
}