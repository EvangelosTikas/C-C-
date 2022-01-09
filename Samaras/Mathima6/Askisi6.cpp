//tyxaious akeraious apo 1 mexri 5 kai gemizw pinaka 100 thesewn
//metraw sto telow posa 1,2,3,4,5 exw? (kalo an exw 20 apo to kathena)
//Note: mporw na kanw 2 pinakes enan kai gia ta counters (me 5 theseis)
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main(){
	srand(time(NULL));
	int arr[]={},i, counter[5]={0,0,0,0,0};
	for(i=0;i<100;i++){
		arr[i]= rand()%5 + 1;
		cout<<arr[i]<<endl;
		if(arr[i]==1){
			counter[0]++;
		}
		else if(arr[i]==2){
			counter[1]++;
		}
		else if(arr[i]==3){
			counter[2]++;
		}
		else if(arr[i]==4){
			counter[3]++;
		}
		else if(arr[i]==5){
			counter[4]++;
		}
	}
	for(i=0;i<5;i++){
		cout<<i+1 <<" appeared "<<counter[i]<<" times. "<<endl;
	}
	return 0;
}
//den prokiptei kali genitria, oi pros ta panw arithmoi (kiriws to 5)
//emfanizetai ligotero
