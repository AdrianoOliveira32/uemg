#include <iostream>

using namespace std;

int main()
{
	string palavra = "nao";
	string frase = "palmeiras nao tem mundial naonao";
	int cont = 0;
        int pos = 0;

	while ((pos = frase.find(palavra, pos)) < frase.length())
	{
		cont++;
		pos += palavra.length();
	}
	cout << cont;
	return 0;
}