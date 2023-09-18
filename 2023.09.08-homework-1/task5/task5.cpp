#include<iostream>

int main()
{
	int v, t,a;
	
	std::cin >> v >> t;
	a = ((((v * t) % 109)+109)%109 + 1);
	
	std::cout << a;

}