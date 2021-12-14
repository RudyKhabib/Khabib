#include <iostream>
#include <cmath>
#include "TwoDObject.h"
#include "Circle.h"
#include "Square.h"
using namespace std;

int main() {
	const double pi=3.141592653589793;
	int i;
	Circle circle1(0,0,1),circle2(1,2,3);
	Square square1(0,0,2),square2(1,2,4);
	TwoDObject *object[]={&circle1,&circle2,&square1,&square2};
	for (i=0;i<4;i++)
		object[i]->show();
	for (i=0;i<4;i++){
		object[i]->move(10,5);
		object[i]->rotate(pi);
		object[i]->scale(4);
	}
	cout << endl << "After move, rotate and scale " << endl << endl;
	for (i=0;i<4;i++)
	object[i]->show();
	return 0;
}