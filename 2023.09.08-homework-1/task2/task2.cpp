#include<fstream>
using namespace std;
int main()
{
	int n,s;
	ifstream fin("INPUT.txt");
	fin >> n;
	ofstream fout("OUTPUT.txt");
	s = (1 + n) / 2 * n;
	fout << s;
}

