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



int fibonacci(int value)
{
    if (value == 0)
        return 0; 
    if (value == 1)
        return 1; 
		return fibonacci(value-1) + fibonacci(value-2);
}
 

int main()
{
	string x;
	int quantity;
	cout << "Enter a integer number from 1 to 100" << endl;
	cin >> x ;
	if (isInt(x)) {
		quantity=stoi(x);
		if (quantity<0 || quantity>=100)
			cout <<"Enter a non-negative integer number no more than 100";
		else {
			for (int count=0; count < quantity; count++)
				cout << fibonacci(count) << " ";
		}
		cout << endl;
	}
		else
			cout << "Enter a integer number from 1 to 100" << endl;
	return 0;
}