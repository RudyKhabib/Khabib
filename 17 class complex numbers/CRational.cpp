#include <iostream>
#include "CRational.h"
using namespace std;

CRational CRational::sum(CRational b) {
		CRational c;
		c.m_numerator=m_numerator*b.m_denominator+m_denominator*b.m_numerator;
		c.m_denominator=m_denominator*b.m_denominator;
		c.reduction();
		return c;
	}

CRational CRational::multiplication(CRational b) {
		CRational c;
		c.m_numerator=m_numerator*b.m_numerator;
		c.m_denominator=m_denominator*b.m_denominator;
		c.reduction();
		return c;
	}

void CRational::output(){
		reduction();
		if (m_numerator==0)
			cout<< 0 << endl;
		else if (m_numerator>=m_denominator && m_numerator%m_denominator==0 )
			cout << m_numerator/m_denominator << endl;
		else if (m_numerator>=m_denominator && m_numerator%m_denominator!=0)
			cout << m_numerator/m_denominator << "*" << m_numerator%m_denominator << "/" << m_denominator << endl;
		else
			cout << m_numerator << "/" << m_denominator << endl;
	}

void CRational::reduction(){
	int i;
	for (i=min(m_numerator,m_denominator);i>=2;i--)
	{	
		if (m_numerator%i==0 && m_denominator%i==0) {
			m_numerator=m_numerator/i;
			m_denominator=m_denominator/i;
		}
	}
} 
