#include <iostream>
#include <iomanip>

using namespace std;
//propaideia programmataki
int main(){
	int i,j,m;
	for(i=1;i<=10;i++){
		
		cout<<'\n'<<"Multiplication table of " <<i<<endl;
		for(j=1;j<=10;j++){
			cout.width(10);
			cout<<"["<<i<<"x"<<j<<" = "<<i*j<<"] "<<endl;
		}
	}
	return 0;
}
