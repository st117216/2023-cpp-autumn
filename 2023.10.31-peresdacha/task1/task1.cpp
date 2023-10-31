#include<iostream>
#include<math.h>
typedef unsigned int uint;
int main()
{
	const int BITS = sizeof(uint) * 8;
	uint x = 0;
	std::cin >> x;
	x = ((x & 0x000000FF) << 24) | ((x & 0x0000FF00) << 8 | ((x & 0x00FF0000) >> 8) | (x & 0xFF000000) >> 24);
	std::cout << std::endl;
	std::cout << x;
	return 0;
}