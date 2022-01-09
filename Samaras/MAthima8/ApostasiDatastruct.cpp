// Mia synartisi pou pairnei Point2D P1 kai P2 ows orismata kai epistefei
// return temp; gia apostasi
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

struct Point2D {
	double x,y;
};

Point2D readPoint (void) {
	Point2D temp;
	cout << "Give x: ";
	cin >> temp.x;
	cout << "Give y: ";
	cin>> temp.y;
	
	return temp;
};
void showPoint(Point2D P){
	cout<< "(" <<P.x<<","<<P.y<<")"<<endl;
};
double distPoint(Point2D P1, Point2D P2){
	double temp;
	temp= sqrt( pow((P1.y-P2.y),2) + pow((P1.x - P2.x),2) );
	return temp;
};
int main(){
	Point2D A,B;
	cout<<"A is: "<<endl;
	A =readPoint();
	cout<<"and B: "<<endl;
	B = readPoint();
	
	showPoint(A);
	showPoint(B);
	cout<<"The distance betwwen A and B is: "<<distPoint(A,B)<<endl;
	system("pause");
	return 0;
}
