#include<iostream>
void banana(int count, int from, int to)
{
	if (count <= 0)
	{
		return;
	}
	int res = 6 - from - to;
	banana(count - 1, from, res);
	std::cout << count << " " << from << " " << to << std::endl;
	banana(count - 1, res, to);
}

int main()
{
	int a = 0;
	std::cin >> a;
	banana(a, 1, 3);
	return 0;
}