#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
	string str;
	int i=0,m=0;
	char a[100] , b[100] ;
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	cout <<"¬ведите слово\n";
	cin >> str;
	for (unsigned int r=0; r<str.length(); r++) {
		b[r]='_'; 
		cout << b[r] << " ";
	}
	cout << "\n";
	while (i!=(str.length())) {
		cout << "¬ведите букву\n";
		cin >> a[m];
		for (unsigned int r=0; r<str.length(); r++) {
			if (a[m]==str[r]){
				b[r]=str[r];
				str[r]='_';
				i++;
			}
			else {
				b[r]=b[r];
			}
			cout << b[r] << " ";
		}
		cout << endl;
		m++;
	}
}
