#include<iostream>
void hanoi(int count, int from, int to)
{
	if (count <= 0)
	{
		return;
	}
	else
	{
		if (count == 1)
		{
			std::cout << count << " " << from << " " << to << std::endl;
		}
		else
		{
			int res = 6 - from - to;
			hanoi(count - 1, from, to);
			std::cout << count << " " << from << " " << res << std::endl;
			hanoi(count - 1, to, from);
			std::cout << count << " " << res << " " << to << std::endl;
			hanoi(count - 1, from, to);

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