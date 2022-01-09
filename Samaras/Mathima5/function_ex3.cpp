// function example
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double convertP2dB(double);
double convertdB2P(double);
int putupMenu();


int main ()
{
    double P1,P2;
    int choice;
    
    do {
       choice = putupMenu();
       switch (choice) {
              case 1:
                   cout << "Give P in W: ";
                   cin >> P1;
                   P2 = convertP2dB(P1);
                   cout << "Result: " << P2 << " dBm" << endl;
                   break;
              case 2:
                   cout << "Give P in dBm: ";
                   cin >> P1;
                   P2 = convertdB2P(P1);
                   cout << "Result: " << P2 << " W" << endl;
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

double convertP2dB(double P) {
  double r;       
  r = 10 * log10(P/0.001);
  return r;
}

double convertdB2P(double dB) {
  double r;       
  r = 0.001 * pow(10,dB/10);
  return r;
}

int putupMenu() {
     int r;
     // system("cls");
     cout <<endl
          << " ------ MENU ------" << endl
          << "1. Convert W to dBm" << endl
          << "2. Convert dBm to W" << endl
          << "0. Exit conversion " << endl << endl
          << "Give a choice: ";
     cin >> r;
     return r;
}
