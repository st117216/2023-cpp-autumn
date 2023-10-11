#include<iostream>

int main()
{
    int num = 0;
    
    int t = 0;
    int d = 1;
    int sum = 0;
    std::cin >> num;
    
    while (num)
    {
        sum += (num % 2);
        t += (num % 2) * d;
        num = num / 2;
        d = d * 10; 
    }
    std::cout << t << " " << sum<<std::endl;

    return 0;
}
