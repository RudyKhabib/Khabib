#include <iostream>
using namespace std;



int fibonacci(int number)
{
    if (number == 0)
        return 0; 
    if (number == 1)
        return 1; 
    return fibonacci(number-1) + fibonacci(number-2);
}
 

int main()
{
float x;
int n;
cout << "Enter a integer number from 1 to 100" << endl;
cin >> x ;
if (x-(int)x==0 && x>=1 && x<100 ) {
n=(int)x;
for (int count=0; count < n; count++)
cout << fibonacci(count) << " ";
}
else
cout << "Enter a integer number from 1 to 100" << endl;
return 0;
}