#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

struct celula
{
	int elemento;
	celula *proxima;
};

void ImprimirLista(celula *lista)
{
	celula *aux = lista;
	if (!lista)
		cout << "Lista vazia";
	else
	{
		while (aux != NULL)
		{
			cout << aux->elemento << endl;
			aux = aux->proxima;
		}
	}
}

celula *InserirNoInicio(celula *lista, int elemento)
{
	celula *nova = new celula;
	nova->elemento = elemento;
	nova->proxima = lista;
	return nova;
}

celula *InserirNoFim(celula *lista, int valor)
{
	celula *nova = new celula;
	nova->elemento = valor;
	if (!lista)  //lista == NULL
	{
		nova->proxima = lista;
		return nova;
	}
	else
	{
		celula *aux = lista; //procura pelo fim da lista
		while (aux->proxima != NULL)
		{
			aux = aux->proxima;
		}
		aux->proxima = nova;
		nova->proxima = NULL;
		return lista;
	}
}

void troca(celula *lista, int n1, int n2)
{
	if(lista != NULL)
	{
		celula *aux = lista;
		while(aux != NULL && aux->elemento != n1)
		{
			aux = aux->proxima;
		}
		if(aux == NULL)
			cout << "Elemento nao encontrado.";
		else
			aux->elemento = n2;
	}
}



int main()
{
	int vetor[] = {1, 2, 3, 4, 5, 6};
	celula *lista1 = constroi(6, vetor);
	ImprimirLista(lista1);

	return 0;
}
