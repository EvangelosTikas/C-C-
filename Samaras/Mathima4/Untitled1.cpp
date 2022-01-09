#include <iostream>

using namespace std;

int main(){
	int i,j;
	for(i=1;i<=10;i++){
		cout << i <<endl;
		if(i<=3) continue;
		cout<<"Show previous numbers "<<endl;
		for(j=3;j>=1;j--){
			cout<<i-j <<" ";

		}
	}
	return 0;
}
