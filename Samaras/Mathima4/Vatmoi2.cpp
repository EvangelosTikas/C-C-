//Dinv vathmous mexri arnhtiko kai typwnei ton meso oro vathmologiaw to max kai to min tvn mathimatvn
//Update:dose duo oria apo to pliktrologio ki elegkse an oi vatmoi einai mesa se ayta
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float grade,sum,max=0,min=10;
	int i=1,a,b,j=0;
	cout<<"Give the lower and higher limits "<<'\n'<<"Lower limit:";
	cin>>a;
	cout<<"Higher limit: "; cin>>b;
	
	do{
		cout<<"Mathima "<<i<<" : ";
		cin>>grade;
		i++;
		if( (grade>=a)  && (grade<=b)){
			j++;
			cout<<"Grade "<<grade<<" is within the limits ["<<a<<" , "<<b<<"]"<<endl; 
		}
		if(grade>=0){
			sum+=grade;
			if (grade > max)
			   max = grade;
			if(grade<min)
				min=grade;
		}
	}while(grade>=0);
	cout<<"Average grade is: " <<sum/i<<endl;
	cout<<"Maximum grade is: "<<max<<" and minimum grade is: "<<min<<endl;
	cout<<j<<" grades are within the limits ["<<a<<" , "<<b<<"]"<<endl;
	return 0;
}
