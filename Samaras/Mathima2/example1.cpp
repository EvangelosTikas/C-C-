#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    
    int a,b,c;
    string result,s_even,s_odd;
    s_even = "even";
    s_odd = "odd";

    cout << "Give a: "; cin >> a;
    cout << "Give b: "; cin >> b;
    // find maximum  
    c = (a>b)?a:b;
    cout << "max = " << c << endl;
    // find minimum
    c = (a<b)?a:b;
    cout << "min = " << c << endl;
    // type of a
    result = (a%2)?s_odd:s_even;
    cout << "a is " << result << endl;
    // type of b
    result = (b%2)?s_odd:s_even;
    cout << "b is " << result << endl;
    
    system("pause");
    return 0;   
}
