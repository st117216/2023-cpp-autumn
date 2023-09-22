#include <iostream>
#include <cmath>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	double x = 0;
	std::cin >> a >> b >> c >> d;
	if (a != 0) {
		x = -b / a;
	}
	if (a == 0 and b == 0) {
		std::cout << "INF";
		return 0;
	}
	if (a == 0 or ((c * x + d) == 0)) {
		std::cout << "NO";
	}
	//if (((std::fmod(x,1))==0) and ((c * x + d) !=0)){
	if (((x - int(x)) == 0) and (c * x + d != 0)) {
		std::cout << x;
		return 0;
	}
	return 0;

}

