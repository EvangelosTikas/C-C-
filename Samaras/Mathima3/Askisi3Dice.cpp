#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
// drop the dice and print the number of times for each possible outcome
int main(){
	int i,N,random_number, counter1=0,counter2=0,counter3=0,counter4=0,counter5=0;
	int counter6=0;
	srand(time(NULL));
	
	cout<<"Give the number of dice rolls : ";
	cin >>N;
	for(i=1;i<=N;i++){
		
		random_number = (rand()%6)+1; //generate numbers 1,2,3.. to 6
		cout<<"Dice rolled: "<<random_number<<endl;
		if((random_number)==1)
			counter1++;
		else if((random_number)==2)
			counter2++;
		else if((random_number)==3)
			counter3++;
		else if((random_number)==4)
			counter4++;
		else if((random_number)==5)
			counter5++;	
		else if((random_number)==6)
			counter6++;
	}
	cout<<"Total drops = "<< N <<endl;
	cout<<"Number 1 rolled "<<counter1 <<" times"<<endl;
	cout<<"Number 2 rolled "<<counter2 <<" times"<<endl;
	cout<<"Number 3 rolled "<<counter3 <<" times"<<endl;
	cout<<"Number 4 rolled "<<counter4 <<" times"<<endl;
	cout<<"Number 5 rolled "<<counter5 <<" times"<<endl;
	cout<<"Number 6 rolled "<<counter6 <<" times"<<endl;
	return 0;
}
