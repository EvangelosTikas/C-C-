#include <iostream>

using namespace std;

int main() {
	
	int i=0,j=0;
	
	while(i<=10) {
		i++;
		cout << i <<endl;
		if (i<=3)
			continue;
		cout << "show three previous numbers:" << endl;
		j=i-3;
		while((j<=i-1) ) {
			j++;
			cout << j << " ";
		}
		cout << endl;
	}
		
	return 0;
}
