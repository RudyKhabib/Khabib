#include <iostream>
#include "CRational.h"
using namespace std;

int main(){
	int numerator1,denominator1,numerator2,denominator2;
	cout << "Enter two fractions" << endl;
	cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;
	if (denominator1==0 || denominator2==0)
	{
		cout << "Enter two fractions with non-zeroes denominators" << endl;
		cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;
	}
	CRational numb1(numerator1,denominator1),numb2(numerator2,denominator2),sumnumb,multiplicationnumb;
	sumnumb=numb1.sum(numb2);
	multiplicationnumb=numb1.multiplication(numb2);
	sumnumb.output();
	multiplicationnumb.output();
	return 0;
}


