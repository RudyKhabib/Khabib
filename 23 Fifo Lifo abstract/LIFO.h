#ifndef __LIFO_H__
#define __LIFO_H__

#include "SUPERIFO.h"

class LIFO: public SUPERIFO
{
public:
	LIFO (int N) : SUPERIFO(N) {};
	virtual void push(int newelement) {return SUPERIFO::push(newelement);};
	virtual void output() {return SUPERIFO::output();};
	virtual int pop();
};

#endif