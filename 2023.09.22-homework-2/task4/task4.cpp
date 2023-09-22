#include <iostream>

int main()
{
	int n = 0;
	int p1 = 0;
	int p5 = 0;
	int p10 = 0;
	int p20 = 0;
	int p60 = 0;
	std::cin >> n;
	p60 = n / 60;
	n = n % 60;
	p20 = n / 20;
	n = n % 20;
	p10 = n / 10;
	n = n % 10;
	p5 = n / 5;
	p1 = n % 5;

	if (p1 * 15 >= 70) {
		p1 = 0;
		p5 = p5 + 1;
	}
	if (p1 * 15 + p5 * 70 >= 125) {
		p1 = 0;
		p5 = 0;
		p10 = p10 + 1;
	}
	if (p1 * 15 + p5 * 70 + p10 * 125 >= 230) {
		p1 = 0;
		p5 = 0;
		p10 = 0;
		p20 = p20 + 1;
	}
	if (p1 * 15 + p5 * 70 + p10 * 125 + p20 + 230 >= 440) {
		p1 = 0;
		p5 = 0;
		p10 = 0;
		p20 = 0;
		p60 = p60 + 1;
	}
	std::cout << p1 << " " << p5 << " " << p10 << " " << p20 << " " << p60;
	return 0;
}


