#ifndef __FIFO_H__
#define __FIFO_H__

#include <iostream>
#include "SUPERIFO.h"
using namespace std;

class FIFO: public SUPERIFO
{
public:
	FIFO (int N) : SUPERIFO(N) {};
	int pop();
};

#endif