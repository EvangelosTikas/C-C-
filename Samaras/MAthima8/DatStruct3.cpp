#include <iostream>
#include <cstdlib>
#include <cmath>

//mia sinartisi poy na ypologizei to metro tou diansimatos kai na to eisagei
using namespace std;

struct Point2D {
	double x,y;
};
struct Vector2D{
	Point2D S,E;
	double norm;
	
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
	cout<< "(" <<P.x<<","<<P.y<<")";
};
double distPoint(Point2D& P1, Point2D& P2){
	double temp;
	temp= sqrt( pow((P1.y-P2.y),2) + pow((P1.x - P2.x),2) );
	return temp;
};
void movePoint(Point2D& P, double x, double y){
	P.x += x;
	P.y += y;	
	
};
void calcNorm(Vector2D& V){
	V.norm = distPoint(V.S , V.E);
	
}
Vector2D readVector(){
	Vector2D temp;
	cout<< " Give S: "<<endl;
	temp.S =readPoint();
	cout<< "Give E: "<<endl;
	temp.E =readPoint();
	calcNorm(temp);
	return temp;
};
Vector2D showVector(Vector2D V){
	cout<<"{";
	showPoint(V.S);
	cout<<",";
	showPoint(V.E);
	cout<<"}"<<endl;
	
}
Vector2D makevector(Point2D P1, Point2D P2){
	Vector2D temp;
	temp.S = P1;
	temp.E = P2;
	
}
int main(){
	Point2D A,B;
	Vector2D a;
	cout<<"read a vector: "<<endl;
	a=readVector();
	showVector(a); cout<<endl;
	cout<<"vector norm= "<<a.norm <<endl;
	cout<<"Now read point from keyboard and make a vector" <<endl;
	A = readPoint();
	B=readPoint();
	cout<<Point A: 

	system("pause");
	return 0;
}
