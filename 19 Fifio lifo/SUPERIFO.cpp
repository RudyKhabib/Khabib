#include <iostream>
#include "SUPERIFO.h"
using namespace std;
 
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

void SUPERIFO :: output(){
	int i;
	for(i=0;i<m_N;i++)
		cout << m_container[i] << " ";
	cout << endl;
}

/*int FIFO :: pop(){
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
*/