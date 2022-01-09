#include <iostream>
#include <cstdlib>

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
}
int main(){
	Point2D A,B;
	cout<<"A is: "<<endl;
	A =readPoint();
	cout<<"and B: "<<endl;
	B = readPoint();
	

	system("pause");
	return 0;
}
