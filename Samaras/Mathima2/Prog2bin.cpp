// flag and variable types
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	float a,b;
	cout <<"Give a number: "; cin >>a; 
	srand(time(NULL));
	b= rand() %10+1;
	cout <<"Random number: " <<b<<endl;
	if (a<b)
		cout <<"Loser";
	else
		cout <<"Winner";
		return 0;	 
}
