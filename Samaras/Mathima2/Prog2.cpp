//An array is a series of the same type placed in contiguous memory location that ca
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;


int main (){
	int a,b,c;
	string result, s_even, s_odd;
	s_even = "even", s_odd = "odd";
	
	cout << "Give a: "; cin >> a;
	cout <<"Give b: "; cin >> b;
	c= (a<b)?a:b;
	
	cout <<"min= " <<c <<endl;
	//type
	result = (a%2)? s_odd:s_even;
	cout << "a is: " <<result <<endl;
	result = (b%2)? s_odd:s_even;
	cout << "b is: " <<result <<endl;
	
	return 0;
}

