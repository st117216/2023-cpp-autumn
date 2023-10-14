#include<iostream>
typedef unsigned int uint;
int main()
{
	const int BITS = sizeof(uint) * 8;
	int a = 0;
	int b = 0;
	int c = 0;
	{
		std::cin >> a;
		std::cin >> b;
		bool up = 0;
		for (int i = 0; i < BITS; ++i)
		{
			bool bitA = ((a >> i) & 1);
			bool bitB = ((b >> i) & 1);
			bool current = bitA ^ bitB ^ up;
			up = (bitA & bitB) | (bitA & up) | (bitB & up);
			c = c | ((int)current << i);
		}
		std::cout << c << std::endl;
	}
	return EXIT_SUCCESS;
}
