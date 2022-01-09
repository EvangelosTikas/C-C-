#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
//
int main(){
	int i,N,random_number, choice,counter=0;;
	srand(time(NULL));
	random_number=(rand()%10+1);
	cout<<"The programm will generate a random number form 1-10! "<<endl;
	cout<<"Give the attempts: ";
	cin>>N;
	
	
	for(i=1;i<=N;i++){
		
		cout<<"Attempt #" <<i <<" - Give yout choice: ";
		cin>>choice;
		if((random_number)==choice){
			cout<<"you win!" <<endl;
			break;
		}
		else if((random_number)>choice)
			cout<<"Try higher!"<<endl;
		else if( ((random_number)<choice))
			cout<<"Try lower!"<<endl;
	}
	if (i>N){
		cout<<"Bad luckk, the secret number was:" <<random_number <<endl;
	}
	
	return 0;
}
