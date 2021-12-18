#include <iostream>
#include <string>
#include <cctype> 
#include <cstdlib>
#include <cassert>
#include "CSlice.h"
using namespace std;


void CSlice::operator[](string str) {
	string twopoint=":";
	string minus="-";
	int indexpoint1,indexpoint2,minus1,minus2,minus3;
	int startint,stopint,stepint;
	indexpoint1=str.find(twopoint);
	indexpoint2=str.find(twopoint,(indexpoint1+1));
	minus1=str.find(minus);
	minus2=str.find(minus,(minus1+1));
	minus3=str.find(minus,(minus2+1));
	assert (abs(atoi(&str[0]))<m_length && abs(atoi(&str[indexpoint1+1]))<m_length && abs(atoi(&str[indexpoint2+1]))<m_length );
	if (isdigit(str[0]))
		startint=atoi(&str[0]);
	else if (minus1==0)
		startint=m_length-atoi(&str[1]);
	else
		startint=0;
	if (isdigit(str[indexpoint1+1])>0)
		stopint=atoi(&str[indexpoint1+1]);
	else if (minus1==(indexpoint1+1) || minus2==(indexpoint1+1))
		stopint=m_length-atoi(&str[indexpoint1+2]);
	else 
		stopint=m_length;
	if (isdigit(str[indexpoint2+1]) && indexpoint2 !=-1)
		stepint=atoi(&str[indexpoint2+1]);
	else if (minus1==(indexpoint2+1) || minus2==(indexpoint2+1) || minus3==(indexpoint2+1))
		stepint=-atoi(&str[indexpoint2+2]);
	else 
		stepint=1;
	int i;
	if (stepint>0) {
		for (i=startint;i<stopint;i+=stepint)
			cout << m_array[i] << "  ";}
	else {
		for (i=stopint-1;i>=startint;i+=stepint)
			cout << m_array[i] << "  ";}
	cout << endl ;
}