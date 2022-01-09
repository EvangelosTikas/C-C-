#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
//
int main(){
	int i,N,random_number, counterover=0,counterunder=0;
	srand(time(NULL));
	
	cout<<"Give the number of randoms to generate: ";
	cin >>N;
	for(i=1;i<=N;i++){
		
		random_number = (rand()%10)+1; //generate numbers 1,2,3..
		cout<<random_number<<endl;
		if((random_number)>5.5)
			counterover++;
		else
			counterunder++;
	}
	cout<<"total numbers = "<< N <<endl;
	cout<<"Numbers over "<<counterover <<endl;
	cout<<"Numbers under "<<counterunder <<endl;
	return 0;
}
