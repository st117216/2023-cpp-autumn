#include<iostream>
void hanoi(int count, int from, int to)
{
	if (count <= 0)
	{
		return;
	}
	else 
	{
		if (from + to == 4)
		{
			hanoi(count, from, 2);
			hanoi(count, 2, to);
		}
		else {

			int res = 6 - from - to;
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