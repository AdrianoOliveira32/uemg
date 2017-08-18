#include <iostream>
#include <sstream>

using namespace std;

int main ()
{
	string a = "25";
	int i;
	stringstream(a) >> i;
	cout << ++i;

}
