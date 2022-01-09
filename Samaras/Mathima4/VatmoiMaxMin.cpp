//Dinv vathmous mexri arnhtiko kai typwnei ton meso oro vathmologiaw to max kai to min tvn mathimatvn
//dose duo oria apo to pliktrologio ki elegkse an oi vatmoi einai mesa se ayta
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float grade,sum,max=0,min=10;
	int i=1;
	do{
		cout<<"Mathima "<<i<<" : ";
		cin>>grade;
		i++;
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
	
	
}
