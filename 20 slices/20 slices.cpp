#include "CSlice.h"
	

int main() {
	CSlice s1(12);
	s1[":"];
	s1["2::"];
	s1["1:11:2"];
	s1[":9"];
	s1["2:-2"];
	s1["::2"];
	s1["::-1"];
	return 0;
}