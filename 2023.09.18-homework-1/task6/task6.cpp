#include<iostream>

int main()
{
	int a, b,c;
	std::cin >> a >> b;
	c = int(((int(a / b) * a + int(b / a )* b)) / ((int(a / b)) + int(b / a)));
	std::cout << c;

}