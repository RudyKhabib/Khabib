#ifndef __SUPERIFO_H__
#define __SUPERIFO_H__

#include <iostream>
using namespace std;

class SUPERIFO
{
protected:
	int m_N;
	int *m_container;
	SUPERIFO (int N) {m_N=N ; m_container = new int[N];};
public:
	~SUPERIFO() {delete[] m_container ;};
	void setContainer(int index, int value) { m_container[index]=value;};
	//int getContainer(int index) {return m_container[index];};
	//int getN() { return m_N;};
	void push(int newelement);
	void output();
};

#endif