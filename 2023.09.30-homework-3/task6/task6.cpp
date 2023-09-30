#include <iostream>
int main()
{
	int num_of_fib = 0;
	std::cin >> num_of_fib;
	int fib1 = 1;
	int fib2 = 1;
	int fib_sum = 1;
	int i = 0;
	while (i < num_of_fib - 2) {
		fib_sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib_sum;
		i = i + 1;
	}
	std::cout << fib_sum;
	return 0;
}