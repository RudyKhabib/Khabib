#include <iostream>
#include <vector>
using namespace std;

void swapfunction1(int *a,int *b){
	int swaper;
	swaper=*a;
	*a=*b;
	*b=swaper;
}

int main() {
	vector<int> random;
	int N,i=0;
	cout << "Enter a number from 2 to 100\n";
	cin >> N;
	random.resize(N);
	if (N>100 || N<=1) {
		cout << "Error, enter a number from 2 to 100\n";
		cin >> N;
	}
	for (i=0;i<N;i++) {
		random[i]=rand();
		cout<<random[i]<<" ";
	}
	cout<<endl;
	for (int startIndex = 0; startIndex < N - 1;startIndex++)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < N;currentIndex++)
		{
			if (random[currentIndex] < random[smallestIndex])
				smallestIndex = currentIndex;
		}
		swapfunction1(&random[startIndex],&random[smallestIndex]);
	}
	for (i=0;i<N;i++)
		cout<<random[i]<<" ";
	cout<<endl;
	return 0;
}