#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    int secret_number,my_number;
    
    srand(time(NULL));
    // secret number
    secret_number = rand()%10+1;
    // input number
    cout << "give a number between 1 and 10: ";
    cin >> my_number;
    // compare numbers
    cout << "secret number is " << secret_number << endl;
    cout << "your number is " << my_number << endl;
    if (my_number >= secret_number) {
                 cout << "you win!" << endl;
                 }
    else {
                  cout << "you loose!" << endl;
                  } 
    system("pause");
    return 0;   
}
