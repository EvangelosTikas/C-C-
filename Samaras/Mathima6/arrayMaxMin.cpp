//eisagete ena pinaka me 10 times kai ypologsite max,min,avg
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
	double foo [5],min,max,avg,sum;
	int i;
	for(i=0;i<5;i++){
		cout<<"Give number: ";
		cin>>foo[i];
	//	cout<<'\n';
	}
	min=max=sum=foo[0];
	for(i=0;i<5;i++){
		min = (min>foo[i] ? foo[i]:min);
		max = (max<foo[i] ? foo[i]:max);
		sum+=foo[i];
	}
	cout<<"Array elements are: { ";
	for(i=0;i<5;i++){
		cout<<"["<<foo[i]<<"], ";
	}
	cout<<"}"<<endl;
	avg=sum/5;
	cout<<"min= "<<min <<endl
		<<"max= "<<max<<endl
		<< "average= "<<avg << endl;
	
	system("pause");
	return 0;
}
