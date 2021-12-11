#include <iostream>
#include "SUPERIFO.h"
#include "FIFO.h"
#include "LIFO.h"
using namespace std;
/*
class SUPERIFO
{
protected:
	int m_N;
	int *m_container;
public:
	SUPERIFO (int N) {m_N=N ; m_container = new int[N];};
	~SUPERIFO() {delete[] m_container ;};
	void setContainer(int index, int value) { m_container[index]=value;};
	//int getContainer(int index) {return m_container[index];};
	//int getN() { return m_N;};
	void push(int newelement);
	void output();
};

class FIFO: public SUPERIFO
{
public:
	FIFO (int N) : SUPERIFO(N) {};
	int pop();
};


class LIFO: public SUPERIFO
{
public:
	LIFO (int N) : SUPERIFO(N) {};
	int pop();
};



void SUPERIFO :: push(int newelement) {
	int i;
	int *container = new int[m_N+1];
	for(i=0;i<m_N;i++)
		container[i+1]=m_container[i];
	container[0]=newelement;
	delete[] m_container;
	m_container=container;
	m_N=m_N+1;
}


int FIFO :: pop(){
	int i,temp;
	if (m_N>1){
		int *containerl = new int[m_N-1];
		for(i=0;i<(m_N-1);i++)
			containerl[i]=m_container[i+1];
		temp=m_container[0];
		delete[] m_container;
		m_container=containerl;
		m_N=m_N-1;
		return temp;
	}
	else 
		cout << "The numbers are over" << endl;
		return m_container[0];
}


int LIFO :: pop(){
	int i,temp;
	if (m_N>1){
		int *containerl = new int[m_N-1];
		for(i=0;i<(m_N-1);i++)
			containerl[i]=m_container[i];
		temp=m_container[m_N-1];
		delete[] m_container;
		m_container=containerl;
		m_N=m_N-1;
		return temp;
	}
	else 
		cout << "The numbers are over" << endl;
		return m_container[0];
}


void SUPERIFO :: output(){
	int i;
	for(i=0;i<m_N;i++)
		cout << m_container[i] << " ";
	cout << endl;
}

*/
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