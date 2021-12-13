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


void SUPERIFO :: setContainer(int index,int value){
	m_container[index]=value;
}