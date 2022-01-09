#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	double kat,tot; //total of KWh
	double price, pagio=5; //price per KWh and pagio of 5 euros per month
	cout<<"Give the consumption: ";
	cin>>kat;
	cout<<" kWh" <<endl;
	//This is the first and my example (Tikas)

	while(kat<0) {
		cout<<"Give a positive consumption: ";
		cin>>kat;
	
		if((kat>0)&&(kat<=200)){
			price=0.005;
			tot=price*kat;
		}
		else if((kat>200)&&(kat<=500)){
			price=0.004;
			tot=200*0.005+(kat-200)*0.005;
		}
		else if ((kat>500) && (kat<=1000)){
			price=0.003;
			tot=200*0.005+300*0.004+(kat-500)*0.005;
		}
		else if( kat>1000){
			price=0.005;
			tot=200*0.005+300*0.004+500*0.003+(kat-1000)*0.005;
		}
	}
	tot +=pagio;
	cout<<"Total: "<<tot<<" euros." <<endl;

	//This is the example of the professor
	return 0;
}
