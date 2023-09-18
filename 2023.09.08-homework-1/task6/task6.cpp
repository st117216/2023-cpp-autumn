#include<iostream>
using namespace std;
int main()
{
	int a, b,c;
	cin >> a >> b;
	c = int(((int(a / b) * a + int(b / a )* b)) / ((int(a / b)) + int(b / a)));
	cout << c;

}