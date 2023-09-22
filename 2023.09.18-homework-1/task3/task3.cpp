#include<iostream>
#include<iomanip>
int main()
{
	double  a = 0;
	double  c = 0;
	std::cin >> a;
	c = floor(a / 10);
	double b = 0;
	b = (c * (c + 1) * 100) + 25;
	std::cout << std::fixed << std::setprecision(0) << b;
	return 0
}
