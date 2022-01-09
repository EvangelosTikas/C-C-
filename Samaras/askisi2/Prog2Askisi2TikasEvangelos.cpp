// Give a number and check if it is even and a multiple of 
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a;
	cout <<"Give your number: "; cin>>a;
	if((a%2)==0){
	
		if(a%6==0){
			cout <<"Number is even and a multiple of 6"<<endl;
		
		}
		else
			cout <<"Number is even but not a multiple of 6" <<endl;
	}
	else{
	
		cout <<"Number is not even and deffinetely not a multiple of 6.\n";
		cout<<"Even numbers have even multiples, so a multiple of 6 would also be an even number!" <<endl;
	}
	return 0;
	
}
