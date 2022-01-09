#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

struct Point2D {
	double x,y;
};

struct Vector2D {
	Point2D S,E;
};

Point2D readPoint(void){
	Point2D temp;
	cout << "Give x: ";
	cin >> temp.x;
	cout << "Give y: ";
	cin >> temp.y;
	return temp;
};

void showPoint(Point2D P) {
	cout << "(" << P.x << "," << P.y << ")";	
}

double distPoint(Point2D P1, Point2D P2){
	double temp;
	temp = sqrt(pow(P1.y-P2.y,2)+pow(P1.x-P2.x,2));
	return temp;
}

void movePoint(Point2D& P, double x, double y){
	P.x = P.x + x;
	P.y += y;
}

Vector2D readVector() {
	Vector2D temp;
	cout << "Give S:" << endl;
	temp.S = readPoint();
	cout << "Give E:" << endl;
	temp.E = readPoint();
	return temp;
}

int main(){
	Point2D A,B;
	Vector2D a = readVector();
/*	A = readPoint();
	B = readPoint();
	cout << "Point A: "; showPoint(A); cout << endl;
	cout << "Point B: "; showPoint(B); cout << endl;
	cout << "Distance A to B = " << distPoint(A,B) << endl;
	movePoint(A,3,3);
	movePoint(B,2,2);
	cout << "Point A: "; showPoint(A); cout << endl;
	cout << "Point B: "; showPoint(B); cout << endl;
	cout << "Distance A to B = " << distPoint(A,B) << endl;
*/
	
	
	system("pause");
	return 0;
}
