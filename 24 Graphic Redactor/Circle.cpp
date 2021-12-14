#include <iostream>
#include "Circle.h"
using namespace std;

void Circle::show() {
	cout << m_figure << ", centre (" << m_x << "," << m_y << "), R=" << c_radius << endl;
}