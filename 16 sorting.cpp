#include <iostream>
#include <vector>
using namespace std;

void swapfunction1(int *a,int *b){
	int swaper;
	swaper=*a;
	*a=*b;
	*b=swaper;
}

 void swapfunction2(int *a,int *b) {
	*a=*a+*b;
	*b=*a-*b;				// doesn't work and I don't know why
	*a=*a-*b;
} 

void swapfunction3(int *a,int *b) {
	*a=*a*(*b);
	*b=*a/(*b);            // doesn't work and I don't know why
	*a=*a/(*b);
} 

void swapfunction4(int *a,int *b) {
*a = *a ^ *b ;
*b = *a ^ *b ;			   // doesn't work and I don't know why
*a = *a ^ *b ;
} 


int main() {
	vector<int> random;
	int N,i=0;
	cout << "Enter a number from 2 to 100\n";
	cin >> N;
	if (N>100 || N<=1) 
		cout << "Error, enter a number from 2 to 100\n";
	else {
		random.resize(N);
		for (i=0;i<N;i++) {
			random[i]=rand();
			cout<<random[i]<<" ";
		}
		cout<<endl<<endl;
		for (int startIndex = 0; startIndex < N - 1;startIndex++)
		{
			int smallestIndex = startIndex;
			for (int currentIndex = startIndex + 1; currentIndex < N;currentIndex++)
			{
				if (random[currentIndex] < random[smallestIndex])
					smallestIndex = currentIndex;
			}
			swapfunction3(&random[startIndex],&random[smallestIndex]);
		}
		for (i=0;i<N;i++)
			cout<<random[i]<<" ";
		cout<<endl;
	}
	return 0;
}