/*  #include <iostream>
#include "SUPERIFO.h"
#include "FIFO.h"
using namespace std;


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
*/