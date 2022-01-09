//aparadeigma double MITROO[15] [33]
//int a;
//a=3;
//pa = &a; kai typwnei to adress of a 
//cout << a .. dinei 3
//ebw cout<<&a dinei 0xFA38 (dieythinsi)
//pali cout<<pa'
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
int main(){
	double a = 3, b=8;
	double *p;
	p= &b;
	a= *p;
	
	cout << "a= " <<a <<endl;
	cout << "&a= " <<&a <<endl;
	cout << "p = " <<a << endl;
	cout << "&p = " <<&p <<endl;
	cout << "*p = " << *p <<endl;
	
	system("pause");
	return 0;
}
