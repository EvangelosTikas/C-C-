//Templates and function tmplates
#include <iostream>
#include <cstdlib>
using namespace std;

namespace doubleprecision{
	const double pi=3.1416;
	double value() { return 2*pi; }
}
namespace singleprecision
{
	const float pi=3.15;
	double value () { return 4*pi;}
}
//name visibillity

int main(){
	
using namespace doubleprecision;
cout<<singleprecision::pi<<endl;
cout<<pi<<endl;
system("pause");
return 0;
}
