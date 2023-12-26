#include <iostream>

void hanoi(int n, int* a, int from, int to);

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[10]{ 0 };
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	hanoi(n, a, 1, 3);

	return EXIT_SUCCESS;
}

void hanoi(int n, int* a, int from, int to)
{
	if (n > 0)
	{
		for (int i = 0; i < n; ++i)
		{
			(a[i] > a[i + 1]) ? to = 3 : to = 2;
			int res = 6 - from - to;
			hanoi(n - 1, a, from, res);
			std::cout << n << " " << from << " " << to << std::endl;
			hanoi(n - 1, a, res, to);
		}
	}
	else
	{
		return;
	}
}