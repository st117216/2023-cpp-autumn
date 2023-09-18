#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	int v, t,a;
	ifstream fin("INPUT.txt");
	fin >> v >> t;
	a = ((((v * t) % 109)+109)%109 + 1);
	ofstream fout("output.txt");
	fout << a;

}