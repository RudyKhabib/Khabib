#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
	string str , answer;
	int i=0,m=0;
	char reader[34] , word[100] , chitka;
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	cout <<"Введите слово\n";
	cin >> str;
	for (int r=0; r<str.length(); r++) {
		word[r]='_'; 
		cout << word[r] << " ";
	}
	cout << "\n";
	while (i!=str.length()) {
		int  contains=0;
		cout << "Введите букву\n";
		cin >> answer;
		if (answer.length()>1 && answer==str){
			cout << "Вы отгадали слово! Ваше слово\n" << str;
			i=str.length();
		}
		else if (answer.length()>1 && answer!=str){
			cout << "Вы не отгадали слово, игра окончена\n" << "Верное слово : " << str;
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
				cout <<"Эта буква уже была, попробуйте еще раз."<< endl;
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
}