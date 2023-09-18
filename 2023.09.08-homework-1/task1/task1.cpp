#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    ifstream fi("INPUT.txt");
    fi >> a;
    fi >> b;
    ofstream fout("OUTPUT.txt");
    fout << (a + b);

}
