#include<iostream>
int main()
{
	int a = 0;
	int v = 0;
	int t = 0;
	std::cin >> v >> t;
	a = ((((v * t) % 109) + 109) % 109 + 1);
	std::cout << a;
	return 0;
}