#include <iostream>
#include <fstream>
#include <cstdlib>
#include "18 rectangle interface.h"
using namespace std;


int main() {
	int i=0;
	double a[8];
	ifstream inf("SomeText.txt");
	if (!inf)
	{
		cerr << "0 0 5 5 5 5 1 1" << endl;
		exit(1);
	}
	while(inf){
		inf>>a[i];
		i++;
	}
	inf.close();
	CRect r1(a[0],a[1],a[2],a[3]);
	CRect r2(a[4],a[5],a[6],a[7]);
	comprassion( r1, r2);
	return 0;
}