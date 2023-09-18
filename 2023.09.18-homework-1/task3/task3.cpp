#include<iostream>
#include<iomanip>
int main()
{   
	double  a,c;
	 
	std::cin >> a;
	c = floor(a / 10);
    double b;
	b = (c * (c + 1) * 100) + 25;
	std::cout << std::fixed<< std::setprecision(0) <<b;
	 
}
