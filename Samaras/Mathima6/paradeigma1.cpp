#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
//gia kuklo Nc/Ns = Ac/As = pi*1^2/(2*2) so pi=4.0*Nc/Ns
double myrand(double a, double b){
	double temp,result;
	if(a>b){
		temp = b;
		b=a;
		a=temp;
	}
	result=(double)rand()/RAND_MAX*(b-a) + a;
	return result;
};
double pdist(double x2,double y2, double x1=0, double y1=0){
	double result, distx,disty;
	distx =  pow(x2-x1,2);
	disty=  pow(y2-y1,2);
	result= sqrt(distx+disty);
	return result;
}
int main(){
	srand (time(NULL));
	int i,Ntotal,Nc;
	double x,y,r;
	
	cout<<"give the points: ";
	cin>>Ntotal;
	for(i=0;i<Ntotal;i++){
		x = myrand(-1,1);
		y= myrand(-1,1);\
		r =pdist(x,y);
		if(r<=1)
			Nc++;
	}
	cout <<" PI = " << 4.0*(double)Nc/Ntotal <<endl;
	system("pause");
	return 0;
}
