#ifndef __LIFO_H__
#define __LIFO_H__

#include <iostream>
#include "SUPERIFO.h"
using namespace std;


class LIFO: public SUPERIFO
{
public:
	LIFO (int N) : SUPERIFO(N) {};
	int pop();
};

#endif