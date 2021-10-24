class CRational
{
public:
	int m_numerator;
	int m_denominator;
	CRational(int numerator=0 , int denominator=1): m_numerator(numerator),m_denominator(denominator){};
	//void setNumber(int numerator, int denominator) {m_numerator=numerator ; m_denominator=denominator ; }
	CRational sum(CRational b) ;
	CRational multiplication(CRational b) ;
	void output();
	void reduction();
};