#ifndef __TwoDObject_H__
#define __TwoDObject_H__

#include <string>
using namespace std;


class TwoDObject
{
protected:
	string m_figure;
	double m_x;
	double m_y;
public:
	TwoDObject (double x=0.0,double y=0.0) : m_x(x),m_y(y) {};
	string getFIGURE() {return m_figure;};
	virtual void move (double x_vector,double y_vector)=0;
	virtual void rotate (double angle)=0;
	virtual void scale (double koef)=0;
	virtual void show()=0;
};

#endif