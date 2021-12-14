#ifndef __Circle_H__
#define __Circle_H__

#include "TwoDObject.h"

class Circle: public TwoDObject
{
private:
	double c_radius;
public:
	Circle (double x,double y,double Radius=1.0): TwoDObject(x,y), c_radius(Radius) {m_figure="Circle";};
	virtual void move (double x_vector,double y_vector) {return TwoDObject::move(x_vector,y_vector);};
	virtual void rotate (double angle) {};
	virtual void scale (double koef) {c_radius=c_radius*koef;};
	void show();
};

#endif