#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#define NMAX 100

using namespace std;

void show(int array[], int size){
	int i;
	for (i=0;i<size;i++)
		cout<< array[i] <<endl;
}
void fillrnd(int array[], int size, int l, int u) {
	int i;
	srand(time(NULL));
	for (i=0; i<size; i++)
		array[i] = l+ (int)(u-1)*rand()/RAND_MAX;
}
int sum(int array[], int size) {
	int i, result =0;
	for (i=0;i<size; i++)
		result += array[i];
	return result;
}
int min(int array[], int size) {
	int i, min = 0;
	for (i=0;i<size; i++)
		min =  ( (min< array[i]) ? array[i] : min );
			
}
int max(int array[], int size) {
	int i, max = 0;
	for (i=0;i<size; i++)
		max =  ( (max> array[i]) ? array[i] : max );
			
}
