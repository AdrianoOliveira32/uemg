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
	/*for (int i = 0; i < 3; ++i)
	{
	    cout << "Digite o nome da pessoa: ";
	    //cin >> pessoas[i].nome;
	    fflush(stdin);
	    getline(cin, pessoas[i].nome);
	    //cout << "Digite a altura da pessoa: ";
	    //cin >> pessoas[i].altura;
	    cout << "Digita a data de nascimento da pessoa: Ex: (dd mm aaaa)";
	    cin >> pessoas[i].dataNascimento.dia >> pessoas[i].dataNascimento.mes >> pessoas[i].dataNascimento.ano;
	    cout << endl;
	}*/
	pessoas[0].nome = "Mailson";
	pessoas[0].dataNascimento.dia = 1;
	pessoas[0].dataNascimento.mes = 3;
	pessoas[0].dataNascimento.ano = 1992;

	pessoas[1].nome = "Queiroz";
	pessoas[1].dataNascimento.dia = 25;
	pessoas[1].dataNascimento.mes = 8;
	pessoas[1].dataNascimento.ano = 2005;

	pessoas[2].nome = "Proenca";
	pessoas[2].dataNascimento.dia = 1;
	pessoas[2].dataNascimento.mes = 4;
	pessoas[2].dataNascimento.ano = 2000;

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
