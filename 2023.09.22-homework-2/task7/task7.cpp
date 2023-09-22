#include <iostream>
int main()
{
	int x = 0;
	std::cin >> x;
	int x1 = 0;
	int x10 = 0;
	x1 = x % 10;
	x10 = x / 10;
	if (x10 == 1) std::cout << "X";
	if (x10 == 2) std::cout << "XX";
	if (x10 == 3) std::cout << "XXX";
	if (x10 == 4) std::cout << "XL";
	if (x10 == 5) std::cout << "L";
	if (x10 == 6) std::cout << "LX";
	if (x10 == 7) std::cout << "LXX";
	if (x10 == 8) std::cout << "LXXX";
	if (x10 == 9) std::cout << "XC";
	if (x10 == 10) std::cout << "C";
	if (x1 == 1) std::cout << "I";
	if (x1 == 2) std::cout << "II";
	if (x1 == 3) std::cout << "III";
	if (x1 == 4) std::cout << "IV";
	if (x1 == 5) std::cout << "V";
	if (x1 == 6) std::cout << "VI";
	if (x1 == 7) std::cout << "VII";
	if (x1 == 8) std::cout << "VIII";
	if (x1 == 9) std::cout << "IX";
	return 0;
}

