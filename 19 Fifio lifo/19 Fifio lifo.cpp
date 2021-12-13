#include <iostream>
#include "FIFO.h"
#include "LIFO.h"
using namespace std;


int main() {
	int Length,i,newelement;
	cout << "Input length of array and newelement" << endl;
	cin >> Length >> newelement;
	FIFO f_array(Length);
	LIFO l_array(Length);
	for (i=0;i<Length;i++) {
		f_array.setContainer(i,i);
		l_array.setContainer(i,i); }
	cout << "Source array fifo  ";
	f_array.output();
	cout << "Source array lifo  ";
	l_array.output();
	f_array.push(newelement);
	cout << "Array fifo after PUSH    ";
	f_array.output();
	l_array.push(newelement);
	cout << "Array fifo after PUSH    ";
	l_array.output();
	cout << "Deleted element fifo POP   ";
	cout << f_array.pop() << endl;
	cout << "Array fifo after POP  ";
	f_array.output();
	cout << "Deleted element lifo POP   ";
	cout << l_array.pop() << endl;
	cout << "Array lifo after POP  ";
	l_array.output();
	return 0;
}























/*int i;
	int* u;
	int* p=new int[4];
	int* q=new int[3];
	for(i=0;i<4;i++)
		p[i]=i;
	for(i=0;i<3;i++)
		q[i]=-i;
	for(i=0;i<4;i++)
		cout << p[i] << " ";
	cout << endl;
	for(i=0;i<3;i++)
		cout << q[i] << " ";
	cout << endl;
	delete[] q;
	q=p;
	for(i=0;i<4;i++)
		cout << p[i] << " ";
	cout << endl;
	delete[] p;
	for(i=0;i<4;i++)
		cout << q[i] << " ";
	cout << endl;*/