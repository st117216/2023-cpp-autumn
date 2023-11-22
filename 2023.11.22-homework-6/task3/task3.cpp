#include<iostream>
void hanoi(int count, int from, int to)
{
	if (count <= 0)
	{
		return;
	}
	else {
		int res = 6 - from - to;
		if ((from == 1 && to == 3) || (from == 3 && to == 2) || (from == 2 && to == 1))
		{
			hanoi(count - 1, from, to);
			std::cout << count << " " << from << " " << res << std::endl;
			hanoi(count - 1, to, from);
			std::cout << count << " " << res << " " << to << std::endl;
			hanoi(count - 1, from, to);
		}
		else
		{
			hanoi(count - 1, from, res);
			std::cout << count << " " << from << " " << to << std::endl;
			hanoi(count - 1, res, to);

		}
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	hanoi(a, 1, 3);
	return 0;
}