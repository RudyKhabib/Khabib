#include <iostream>
#include <string.h>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
 
int isInt(string x){
	int i=0 , pravdivator=1;
	while (i<x.length()&& pravdivator){
		if (isdigit(x[i])) 
			pravdivator=1;
		else 
			pravdivator=0;
		i++;
	}
	return pravdivator;
}

		
int factorial(int value)
{
		if (value==0 || value==1 )
			return 1;
		else if (value>0 && value<100)
			return factorial(value-1)*value;
		else 
			cout <<"Enter a non-negative integer number no more than 100";
}

int main()
{
	int count=0;
	string x;
	cout << "Enter a number" << endl;
	cin >> x;
	if (isInt(x))
	{
		count=stoi(x);
		cout << factorial(count) << endl;
	}
	else
		cout <<"Enter a non-negative integer number no more than 100" << endl; 
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