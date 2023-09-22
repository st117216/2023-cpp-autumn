#include <iostream>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;
	int z = 0;
	if (a > b) {
		z = a;
		a = b;
		b = z;
	}
	if (a > c) {
		z = a;
		a = c;
		c = z;
	}
	if (b > c) {
		z = b;
		b = c;
		c = z;
	}
	std::cout << a << " " << b << " " << c;
	return 0;

}

