#include <iostream>
#include "18 rectangle interface.h"
using namespace std;


int main() {
	double xl1,yl1,hgh1,wdth1,xl2,yl2,hgh2,wdth2;
	cout << "Enter coordinates of the left point (x,y), high and width of the first rectangle" << endl;
	cin >> xl1 >> yl1 >> hgh1 >> wdth1;
	cout << "Enter coordinates of the left point (x,y), high and width of the second rectangle" << endl;
	cin >> xl2 >> yl2 >> hgh2 >> wdth2;
	CRect r1(xl1,yl1,hgh1,wdth1);
	CRect r2(xl2,yl2,hgh2,wdth2);
	comprassion( r1, r2);
	return 0;
}