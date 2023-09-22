#include<iostream>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b;
	c = int(((int(a / b) * a + int(b / a) * b)) / ((int(a / b)) + int(b / a)));
	std::cout << c;
	return 0;
}