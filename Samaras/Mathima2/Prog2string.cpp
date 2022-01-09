#include <iostream>
#include <string>

using namespace std;
int main()
{
	char myWord[] = "Hello";
	cout <<myWord <<endl;
	char question1[]  ="What is your name? \n";
	string question2 = "where do you live? \n";
	char answer1 [80];
	string answer2;
	cout <<question1;
	cin >>answer1;
	cout <<question2;
	cin >>answer2;
	cout <<"Hello, " <<answer1 <<" from " <<answer2 <<"!\n";
	return 0;
}
