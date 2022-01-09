#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
//calculate the distance betwwen two (x1,y1) and (x2,y2)
void sqube(double x, double & square, double& cube) {
	square = x*x;
	cube = x*x*x;
}
int main() {
	double v=3.0,s,c;
	sqube(v,s,c);
	cout<<v<<" "<<s<<" "<<c<<endl;
	system("pause");
	return 0;
}
