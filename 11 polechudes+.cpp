#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
	string str , answer;
	int i=0,m=0;
	char reader[34] , word[100] , chitka;
	cout <<"Vvedite slovo\n";
	cin >> str;
	for (int r=0; r<str.length(); r++) {
		word[r]='_'; 
		cout << word[r] << " ";
	}
	cout << "\n";
	while (i!=str.length()) {
		int  contains=0;
		cout << "Vvedite bukvu\n";
		cin >> answer;
		if (answer.length()>1 && answer==str){
			cout << "Vi otgadali slovo! Vashe slovo\n" << str;
			i=str.length();
		}
		else if (answer.length()>1 && answer!=str){
			cout << "Vi ne ongadali slovo, igra okonchena!\n" << "Vernoe slovo : " << str;
			i=str.length();
		}
		else {
			chitka=answer[0];
			for (int k=0; k<=m; k++) {
				if (m!=k && chitka==reader[k])
						contains=1;
				else
					reader[m]=chitka;
			}
			if (contains){
				cout <<"Eta bukva uzhe bila, poprobuyte eshe raz"<< endl;
				for (int r=0; r<str.length(); r++) 
					cout << word[r] << " ";
			}
			else {
					for (int r=0; r<str.length(); r++) {
						if (reader[m]==str[r]){
							word[r]=str[r];
							i++;
						}
						cout << word[r] << " ";
				}
			}
		}
		cout << endl;
		m++;
		}
	return 0;
}