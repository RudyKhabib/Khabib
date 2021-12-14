#ifndef __Square_H__
#define __Square_H__
#include "TwoDObject.h"

class Square: public TwoDObject
{
private:
	double s_height;
	double s_angle;
	double u_l_x;
	double u_l_y;
	double u_r_x;
	double u_r_y;
	double d_l_x;
	double d_l_y;
	double d_r_x;
	double d_r_y;
	const double pi;
public:
	Square (double x,double y,double hgh=0.5): TwoDObject(x,y), pi(3.141592653589793) {
		m_figure="Square";
		s_height=hgh;
		s_angle=0;
		u_l_x=m_x - s_height/2;
		u_l_y=m_y + s_height/2;
		u_r_x=m_x + s_height/2;
		u_r_y=m_y + s_height/2;
		d_l_x=m_x - s_height/2;
		d_l_y=m_y - s_height/2;
		d_r_x=m_x + s_height/2;
		d_r_y=m_y - s_height/2;
	}
	virtual void move (double x_vector,double y_vector) ;
	virtual void rotate (double angle) ;
	virtual void scale (double koef);
	virtual void show();
};
#endif