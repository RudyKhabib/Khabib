#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
    int answer = 0;
    int max_number = 100, min_number=0;
    cout << "Ugadayte chislo ot 1 do 100\n";
    while (answer != 3)
    {
        cout << "Bolshe  "<< (max_number + min_number) / 2 << "? (1-da, 2-net, 3-ravno)"<< std::endl;
        cin >> answer;
        if (answer == 1)
        {
            min_number = (max_number + min_number) / 2;
        }
        else if (answer == 2) {
            max_number = (max_number + min_number) / 2;
        }
    }
    cout << "Vashe chislo " << (max_number + min_number) / 2 << std::endl;
	return 0;
}