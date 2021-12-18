#include <string>
using namespace std;

class CSlice {
private:
	int m_length;
	int *m_array;
public:
	CSlice (int length=10) { 
		int i;
		m_length=length;
		m_array=new int[m_length];
		for (i=0;i<m_length;i++)
			m_array[i]=i;
	}
	~CSlice() {delete[] m_array;};
	int getARRAY(int index) {return m_array[index];};
	void operator[](string index);
};
 