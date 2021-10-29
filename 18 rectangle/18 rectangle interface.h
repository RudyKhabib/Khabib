
class CRect
{
private:
	double m_xL,m_yL,m_high,m_width;
public:
	CRect (double xl, double yl, double hgh, double wdth): m_xL(xl),m_yL(yl),m_high(hgh),m_width(wdth) {}
	double getxl() { return m_xL; }
	double getyl() { return m_yL; }
	double gethgh() { return m_high; }
	double getwdth() { return m_width; }
};

void comprassion(CRect r1, CRect r2);