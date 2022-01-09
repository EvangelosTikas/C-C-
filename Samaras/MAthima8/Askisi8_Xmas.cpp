#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

struct myComplex {
	double re,im,norm;
	calcNorm();
};

double calcNorm(myComplex& V){
	V.norm  = sqrt( pow(V.re,2) + pow(V.im,2) );

}
myComplex readComplex() {
	myComplex temp;
	cout<<"Real:"; 
	cin >> temp.re;
	cout<<"Imaginary: "; 
	cin >> temp.im;
	temp.norm = calcNorm(temp);
	return temp;
	
};
myComplex showComplex(myComplex P){
	cout<<P.re;
	if(P.im>0)
		cout<<" + j"<<P.im;
	else if(P.im==0)
		cout<<"";
	else
		cout<<" - j"<<abs(P.im);
};


myComplex Conjugate(myComplex& P){
	cout<<P.re;
	if(P.im>0)
		cout<<" - j"<<P.im;
	else if(P.im==0)
		cout<<"";
	else
		cout<<" + j"<<abs(P.im);
}
myComplex productComplex(myComplex& P1, myComplex& P2){
	myComplex temp;
	temp.re = P1.re * P2.re - P1.im * P2.im;
	temp.im = P1.re * P2.im + P1.im * P2.re;
	return temp;
}

int main(){
	myComplex z1,z2,z;
	
	cout<<"Give the parameters for complex A: "<<endl<<"Re= ";
	cin>>z1.re;
	cout<<"Im= ";
	cin>>z1.im;
	
	cout<<"Complex z1 is: ";
	showComplex(z1); cout<<endl;
	cout<< "Norm of z1= "<< calcNorm(z1) <<endl;
	cout<<"Conjugate z1= "; Conjugate(z1); cout <<endl;
	
	cout<<"Now create a complex z2: "<<endl;
	double x=4,y=5;
	z2 = readComplex();
	cout<<"Complex z2 is:";
	showComplex(z2); cout<<endl;
	cout<< "Norm of z2= "<< z2.norm <<endl;
	cout<<"Conjugate z2= "; Conjugate(z2); cout <<endl;
	
	cout<<"Finally the product of z= z1*z2 = ";
	z=productComplex(z1,z2);
	showComplex(z);
	
}
