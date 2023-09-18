#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	ifstream fin("INPUT.txt");
	fin >> a;
	a = int(a / 10);
	b = a * (a + 1) * 100 + 25;
	ofstream fout("output.txt");
	fout << b;

}
