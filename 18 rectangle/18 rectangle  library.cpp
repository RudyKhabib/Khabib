#include <iostream>
#include <fstream>
#include <cstdlib>
#include "18 rectangle interface.h"
using namespace std;

void comprassion(CRect r1, CRect r2)
{

	if ((r1.getxl()-r2.getxl()<=r2.getwdth())&&(r1.getxl()-r2.getxl()>=0)&&(abs(r1.getyl()-r2.getyl())<=r2.gethgh())||(r2.getxl()-r1.getxl()<=r1.getwdth())&&(r2.getxl()-r1.getxl()>=0)&&(abs(r2.getyl()-r1.getyl())<=r1.gethgh())) {
		cout << "intersect" << endl;
	}
	else {
		cout << "not intersect" <<endl ;
	}
}