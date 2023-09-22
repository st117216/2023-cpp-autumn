#include <iostream>
int main()
{
	int x = 0;
	int y = 0;
	std::cin >> x >> y;
	if (((x != 1) and (y != 1)) or (x == 1 and y == 1)) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
	return 0;
}


