#ifndef __FIFO_H__
#define __FIFO_H__

#include "SUPERIFO.h"

class FIFO: public SUPERIFO
{
public:
	FIFO (int N) : SUPERIFO(N) {};
	virtual void push(int newelement) {return SUPERIFO::push(newelement);};
	virtual void output() {return SUPERIFO::output();};
	virtual int pop();
};

#endif