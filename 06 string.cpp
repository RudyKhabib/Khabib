#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;

int main()
{
    string str;
	cout<<"Vvedite strocu\n";
    cin >> str;
    char* array=new char[str.length()];
    for (unsigned int i = 0; i < str.length(); i++)
    {
        array[i] = str[i];
    }
    for (unsigned int i = 0; i < str.length(); i++)
    {
        cout << array[i];

    }
	cout << std::endl;
	return 0;
}