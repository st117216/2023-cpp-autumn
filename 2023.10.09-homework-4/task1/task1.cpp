#include <iostream>
int main()
{
	std::cout << "Введите размер массива" << std::endl;
	int n = 0;
	std::cin >> n;
	int* mass = (int*)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		std::cin >> *(mass + i);
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (*(mass + i) > 0) {
			count++;
		}
	}
	std::cout << count;
	free(mass);
	return 0;
}