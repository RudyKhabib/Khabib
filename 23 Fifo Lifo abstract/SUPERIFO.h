#ifndef __SUPERIFO_H__
#define __SUPERIFO_H__

class SUPERIFO
{
protected:
	int m_N;
	int *m_container;
public:
	SUPERIFO (int N) {m_N=N ; m_container = new int[N];};
	~SUPERIFO() {delete[] m_container ;};
	void setContainer(int index, int value);
	virtual void push(int newelement)=0;
	virtual void output()=0;
	virtual int pop()=0;
};


#endif


