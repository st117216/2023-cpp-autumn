﻿#include<iostream>
typedef unsigned int uint;
int main()
{
	const int BITS = sizeof(uint) * 8;
	int n = 0;
	{
		std::cin >> n;
		if (n == 0)
		{
			n = ~n;
		}
		else
		{
			int start = BITS - 1;
			int end = 0;
			while ((n >> start & 1) == 0)
			{
				start--;
			}
			while ((n >> end & 1) == 0)
			{
				end++;
			}
			start--;
			end++;
			uint mask = 0;
			mask = ~mask;
			mask = (mask >> (start - end + 1));
			mask = ~mask;
			mask = (mask >> (BITS - start - 1));
			n = n ^ mask;
			mask = 0;
			for (int i = end; i <= start; ++i)
			{
				mask = mask | (1 << i);
			}
			{
				std::cout << "0b ";
				for (int i = BITS - 1; i >= 0; --i)
				{
					std::cout << ((n >> i) & 1) << (i % 4 == 0 ? " " : "");
				}
				std::cout << std::endl;
			}
		}
	}
	return 0;
}