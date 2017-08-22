#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct dat
{
	int dia, mes, ano;
};

struct pessoa
{
	string nome;
	float altura;
	dat dataNascimento;
};

int main()
{
	pessoa pessoas[10];

	dat data1;
	for (int i = 0; i < 3; ++i)
	{
		cin.get();
	    cout << "Digite o nome da pessoa: ";
	    //cin >> pessoas[i].nome;
	    //cin.ignore();
	    getline(cin, pessoas[i].nome);
	    //cout << "Digite a altura da pessoa: ";
	    //cin >> pessoas[i].altura;
	    cout << "Digita a data de nascimento da pessoa. Ex: (dd mm aaaa): ";
	    cin >> pessoas[i].dataNascimento.dia >> pessoas[i].dataNascimento.mes >> pessoas[i].dataNascimento.ano;
	    cout << endl;
	}

	cout << "Digite uma data: ";
	cin >> data1.dia >> data1.mes >> data1.ano;


	for (int j = 0; j < 3; ++j)
	{
		if (pessoas[j].dataNascimento.ano < data1.ano || 
		   (data1.ano == pessoas[j].dataNascimento.ano && pessoas[j].dataNascimento.mes  < data1.mes) || 
   	   	   (data1.ano == pessoas[j].dataNascimento.ano && data1.mes == pessoas[j].dataNascimento.mes && pessoas[j].dataNascimento.dia < data1.dia))
			cout << pessoas[j].nome << endl;
	}


	cin.ignore().get();
	return 0;
}
