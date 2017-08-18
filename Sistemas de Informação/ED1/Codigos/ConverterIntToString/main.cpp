#include <iostream>
#include <sstream>  
using namespace std;

int main ()
{
	int a = 10;
	stringstream ss;
	ss << a;
	string str = ss.str();
	str += " teste";
	cout << str;
	return 0;
}
