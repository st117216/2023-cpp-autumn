#include <iostream>
int main()
{
	std::cout << "Enter n" << std::endl;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			std::cout << ((i + j - 1) % 2 + 1);
		}
		std::cout << std::endl;
	}
	return 0;
}
