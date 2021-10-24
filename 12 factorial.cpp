#include <iostream>
#include <string.h>
#include <cctype>
#include <cstring>
using namespace std;
 
int stringcheck(

int factorial(long double count)
{
	long int value;
	if (count-(long int)count==0 && count>=0 && count<100 ) {
		value=(long int)count;
		if (value==0 || value==1 )
			return 1;
		else
			return factorial(value-1)*value;
	}
	else 
		return -1;
}

int main()
{
	string x;
	cout << "Enter a number" << endl;
	cin  >> x ;
	if (factorial(x)==-1)
		cout <<"Enter a non-negative integer number no more than 100" << endl;
	else 
		cout << factorial(x) << endl;
    return 0;
}



/*int factorial(int count)
{
	if (isdigit(count))
		cout << "Enter a integer number" << endl;
	else if (count<0)
		cout << "Enter a non-negative number" << endl;
	else 
		if (count==0 || count==1)
			return 1;
		else
			return factorial(count-1)*count;
}*/

	//cout << n << endl;
	/*if (isdigit(x)==0)
		cout << "Enter a integer number" << endl;
	else if (x<0)
		cout << "Enter a non-negative number" << endl;*/