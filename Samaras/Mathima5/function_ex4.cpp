// function example
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double calcRoot(double, int, double);
int main ()
{
    double S, root, tol = 1E-4;
    int nroot;   
    do {
       cout << "Give a positive number: ";
       cin >> S;
       cout << "Give 2 for Square and 3 for cubic root: ";
       cin >> nroot;
    } while((S<0)||((nroot!=2)&&(nroot!=3)));   
    root = calcRoot(S,nroot,tol);  
    cout << "Result = " << root << endl;   
    system("pause");
    return 0;  
}

double calcRoot(double Y, int N, double T) {
       double XN,XN1,r,t;
       XN = Y/2;
       do {
           if (N==2)
              XN1 = XN - XN/2 + Y/(2*XN);
           else if (N==3)
              XN1 = XN - XN/3 + Y/(3*XN*XN);
           else
               return -1;
           t = fabs((XN1-XN)/XN);
           XN = XN1;
       } while(t>T);       
       r = XN1;
       return r;
}
