// Kante ena programma pou tha eisagete apo to pliktrologio synexeia (akeraious)
//Sto mhden stamata h eisagogi
//Vreite th mesh timh tvn uetikvn kai thn mesh timh tvn arnitikwn
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int i=1,j,sumpos=0,sumneg=0,p=0,n=0;
	
	while(i){
	cout<<"Give a number: "<<endl;
	cin>>j;
	if(j==0){
		cout<<"You gave the number 0 so program terminates here."<<endl;
		break;
	}
	if(j>0){
	
		sumpos +=j;
		p++;
	}
	else if(j<0){
	
		sumneg +=j;
		n++;
		}
	}
	if( (p!=0) || (n!=0))
		cout<<"Positive average is: "<<(float)sumpos/p<<" and negative average: "<<(float)sumneg/n <<endl;
	return 0;
}
	
		
