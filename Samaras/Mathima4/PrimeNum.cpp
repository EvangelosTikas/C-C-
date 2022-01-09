#include <iostream>

using namespace std;

int main(){
	int i,j;
	for(i=1;i<=20;i++){
		for(j=2;j<=i-1;j++){
			if(i%j == 0)
			//cout << "number" <<i "is not a prime"
			break;
		}
		if(i==j){
			cout<<"Number " <<j <<" is a prime number" <<endl;
		}

	}
	return 0;
}
