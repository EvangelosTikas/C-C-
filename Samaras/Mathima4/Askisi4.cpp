//Doste enan arithmo sto diasthma [1,100] kai tsekarete an einai rombikos (r=i^2+i*j+j^2)
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,i,j;
	float r;
	bool is_r;
	do{
		cout<<"Give a number: ";
		cin>>a;
	}while( (a<=1) && (a>=100) );
	cout<<"Calculate and check if it is a rhombic number with  2 random numbers i,j"<<endl;

	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			r= i*i +i*j + j*j;
			cout<<r<<endl;
			if(r==a)
				is_r=true;
		}
	}
	if(is_r==true)
		cout<<"Number "<<a<<" is a rhombic number!"<<endl;
	else
		cout<<"Apparrently number "<<a<<" is not a rhombic number!"<<endl;
	return 0;
}
