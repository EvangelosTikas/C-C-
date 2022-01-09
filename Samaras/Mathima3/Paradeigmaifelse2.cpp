#include <iostream>

using namespace std;

int main(){
	int total,day;
	//A programm which gives the toal price based on the days spent
	//eksoda fakelou einai 25 euro
	cout<<"Give the days spent: ";cin>>day;cout<<" days"<<endl;
	while(day<0){
		cout<<"Give a positive number of days: "<<endl;
		cin>>day;
	}
	
		if((day>1)&&(day<+5))
			total=28*day;
		else if(day>5 && day <=7)
			total=28*5+(day-5)*25;
		else if (day>7 && day<=14)
			total=28*5+2*25+(day-7)*20;
		else if(day>14)
			total=28*5+2*25+7*20+(day-14)*20;
	total=total+25; //eksoda fakelou
	cout<< "Total amount is: " <<total <<" euro" <<endl;
	return 0;
}
