#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "int_arrays_util.cpp"
#define NMAX 100
using namespace std;


double avg(int arr[], int arrsize) {
	return sum(arr,arrsize) / (double)arrsize;
}

int max(int arr[], int arrsize);
int min(int arr[], int arrsize);

int main(){
	int *any;
	int N;
	
	cout<<"Give number of elements: ";
	cin>>N;
	
	any = new  int[N];
	if (any==0){
		cout<< "Not enough memory "<<endl;
		cout<<"any= "<<any<<endl;
		system("pause");
		return -1;
	}
	
	fillrnd(any,N, 0, 5);
	show(any, N);
	cout<< "sum = " << sum(any,N) <<endl;
	cout<<"avg= "<< avg(any,N) <<endl;
	cout<< "min= " << min(any,N) <<endl;
	cout<<"max= " <<max(any,N) <<endl;
	system("pause");
	return 0;
}

