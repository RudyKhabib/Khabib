#include <iostream>
#include <cmath>
#include "Square.h"
using namespace std;


void Square::show(){
	cout << m_figure << ", centre (" << m_x << "," << m_y << "), side=" << s_height << ", angle=" << s_angle << endl;
	cout << " (" << u_l_x << "," << u_l_y << "), ";
	cout << "(" << u_r_x << "," << u_r_y << "), ";
	cout << "(" << d_l_x << "," << d_l_y << "), ";
	cout << "(" << d_r_x << "," << d_r_y << ")" << endl;
}

void Square::move (double x_vector,double y_vector) {
	m_x=m_x+x_vector;
	m_y=m_y+y_vector;
	u_l_x=u_l_x+x_vector;
	u_l_y=u_l_y+y_vector;
	u_r_x=u_r_x+x_vector;
	u_r_y=u_r_y+y_vector;
	d_l_x=d_l_x+x_vector;
	d_l_y=d_l_y+y_vector;
	d_r_x=d_r_x+x_vector;
	d_r_y=d_r_y+y_vector;
}

void Square::rotate (double angle) {
	double diagonal;
	const double pi=3.141592653589793;
	diagonal=s_height/sqrt(2);
	s_angle=s_angle+angle;
	u_l_x=m_x+diagonal*cos(3*pi/4.+s_angle);
	u_l_y=m_y+diagonal*sin(3*pi/4.+s_angle);
	u_r_x=m_x+diagonal*cos(pi/4.+s_angle);
	u_r_y=m_y+diagonal*sin(pi/4.+s_angle);
	d_l_x=m_x+diagonal*cos(5*pi/4.+s_angle);
	d_l_y=m_y+diagonal*sin(5*pi/4.+s_angle);
	d_r_x=m_x+diagonal*cos(7*pi/4.+s_angle);
	d_r_y=m_y+diagonal*sin(7*pi/4.+s_angle);
}

void Square::scale (double koef){
	double diagonal;
	s_height=s_height*koef;
	this->rotate(0);
}