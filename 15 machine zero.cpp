#include <iostream>
using namespace std;
int main()
{
	float e_float=1, zero_float=1,inf_float=1;
	double e_double=1, zero_double=1,inf_double=1;
	long double e_ldouble=1, zero_ldouble=1,inf_ldouble=1;
	int k=0, i=1;
	while (1+e_float!=1) // счёт машинного эпсилона float
		e_float=e_float/2 ;
	while (1+e_double!=1)  // double
		e_double=e_double/2 ;
	while (1+e_ldouble!=1) // long double
		e_ldouble=e_ldouble/2 ;
	cout << "Epsilon float=" <<e_float<<"  Epsilon double="<<e_double<<"  Epsilon long double="<<e_ldouble<<endl<<endl;
	while (zero_float!=0) // счёт машинного нуля float
	{
		zero_float=zero_float/2 ;
		k++;
	}
	zero_float=1;
	for(i=1;i<(k-1);i++)
		zero_float=zero_float/2;
	k=0;
	while (zero_double!=0) // double
	{
		zero_double=zero_double/2 ;
		k++;
	}
	zero_double=1;
	for(i=1;i<(k-1);i++)
		zero_double=zero_double/2;
	k=0;
	while (zero_ldouble!=0) // long double
	{
		zero_ldouble=zero_ldouble/2 ;
		k++;
	}
	zero_ldouble=1;
	for(i=1;i<(k-1);i++)
		zero_ldouble=zero_ldouble/2;
	for(i=1;i<128;i++) //счёт машинной бесконечности float
		inf_float=inf_float*2;
	for(i=1;i<1024;i++) //double
		inf_double=inf_double*2;
	for(i=1;i<1024;i++) //long double
		inf_ldouble=inf_ldouble*2;
	cout << "Machine zero float=" <<zero_float<<"  machine zero double="<<zero_double<<"  machine zero long double="<<zero_ldouble<<endl<<endl; 
	cout <<"Difference float="<< e_float-zero_float<<"  Difference double="<<e_double-zero_double<<"  Difference long double="<<e_ldouble-zero_ldouble<<endl<<endl ;
	cout <<"Sum float="<< e_float+zero_float<<"  Sum double="<<e_double+zero_double<<"  Sum long double="<<e_ldouble+zero_ldouble<<endl<<endl ;
	cout << "Machine infinty float="<< inf_float << "  Machine infinty double="<<inf_double << "  Machine infinty long double="<<inf_ldouble<<endl<<endl;
	return 0;
}