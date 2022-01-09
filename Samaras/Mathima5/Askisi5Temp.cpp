//1.Apo celsius se farenheit
//2. apo F se C
//3. apo F se K
//0. gia eksodo
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double c2f(double);
double f2c(double);
double f2k(double);
int menu();

int main(){
	
	double temp1,temp2;
    int choice;
	do {
       choice = menu();
       switch (choice) {
              case 1:
                   cout << "Give temperature in Celsius: ";
                   cin >> temp1;
                   temp2= c2f(temp1);
                   cout << "Result: " << temp2 << " Fahrenheit" << endl;
                   break;
              case 2:
                   cout << "Give temperature in Fahrenheit: ";
                   cin >> temp1;
                   temp2= f2c(temp1);
                   cout << "Result: " << temp2 << " Celsius" << endl;
                   break;
              case 3:
                   cout << "Give temperature in Fahrenheit: ";
                   cin >> temp1;
                   temp2= f2k(temp1);
                   cout << "Result: " << temp2 << " Kelvin" << endl;
                   break;     
              case 0:
                   cout << "Exiting program..." << endl;
                   return 0;
                   break;
              default:
                      choice = -1;
                      cout << "Wrong choice!" << endl;  
       }
    } while (choice == -1);

    system("pause");
    return 0;  
}

double c2f(double tempc){
	double tempf;
	return tempf=(tempc*1.8) + 32;
}
double f2c(double tempf){
	double tempc;
	return tempc = (tempf - 32)*0.5556;
}
double f2k(double tempf){
	double tempk;
	return tempk=(tempf-32)*0.5556 + 273.15;
}
int menu() {
     int r;
     // system("cls");
     cout <<endl
          << " ------ MENU -----" << endl
          << "1. Convert C to F" << endl
          << "2. Convert F to C" << endl
          << "3. Convert F to K" <<endl
          << "0. Exit conversion " << endl << endl
          << "Give a choice: ";
     cin >> r;
     return r;
}
