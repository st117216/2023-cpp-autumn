#include<iostream>

int main()
{
    int num = 0;
    int num_i = 0;
    int t = 0;
    int d = 1;
    
    std::cin >> num;

    while (num)
    {
        t += (num % 2) * d;
        num = num / 2;
        d = d * 10;
    }
    std::cout << t << " " << std::endl;

    return 0;
}