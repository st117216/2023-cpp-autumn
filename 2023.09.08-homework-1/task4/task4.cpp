#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	ifstream fin("INPUT.txt");
	fin >> a;
	b = (a * 100) + 90 + (9 - a);
	ofstream fout("output.txt");
	fout << b;

}
    