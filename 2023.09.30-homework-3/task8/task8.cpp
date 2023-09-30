#include <iostream>

int main()
{
	const int LIMIT = 100000;
	int a, b, n;
	std::cin >> a >> b >> n;
	char min = 'A', max = 'B';
	bool real = false;
	if (b < a)
	{
		std::swap(a, b);
		std::swap(min, max);
	}
	int bV = 0, aV = 0;

	int k = 0;
	while (k <= LIMIT)//do
	{
		//k++;      
		k++;
		if (b - bV >= a)
			bV += a;
		else
		{
			bV = a - (b - bV);
			// k++; 
			k++;
		}
		if (n == bV)
		{
			real = true;
			break;
		}
	}
	if (real)
	{
		bV = 0;
		while ((n != bV))//do
		{
			std::cout << ">" << min << std::endl;
			std::cout << min << ">" << max << std::endl;//printf("%c>%c\n", min, max);   
			if (b - bV >= a) {
				bV += a;
			}
			else
			{
				bV = a - (b - bV);
				//  std::cout<<max<<">"<<std::endl;//printf("%c>\n",max);     
				  //std::cout<<min<<">"<<max<<std::endl;//printf("%c>%c\n", min, max); 
			}
		}
	}
	else
		std::cout << "Impossible";
	return 0;
}
