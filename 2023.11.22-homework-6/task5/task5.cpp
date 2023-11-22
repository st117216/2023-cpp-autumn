#include<iostream>
void hanoi(int count, int from, int to)
{
	if (count <= 0)
	{
		return;
	}

	int res = 6 - from - to;
	hanoi(count - 1, from, res);
	std::cout << count << " " << from << " " << to << std::endl;
	hanoi(count - 1, res, to);
}

int main()
{
	int a = 0;
	std::cin >> a;
	int to = 0;
	if (a % 2 == 0)
	{
		to = 3;
	}
	else
	{
		to = 2;
	}
	int from = 1;
	hanoi(a, from, to);
	int res = 5 - to;
	for (int i = a; i > 0; i--)
	{
		hanoi(i - 1, to, res);
		std::swap(to, res);
	}
	return 0;
}