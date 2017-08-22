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

celula *unir(celula *lista1, celula *lista2)
{
	celula *lista3 = NULL;
	celula *aux = lista1;

	while(aux)
	{
		lista3 = InserirNoFim(lista3, aux->elemento);
		aux = aux->proxima;
	}
	aux = lista2;
	while(aux)
	{
		lista3 = InserirNoFim(lista3, aux->elemento);
		aux = aux->proxima;
	}
	return lista3;

}



int main()
{
	celula *l1 = NULL;
	l1 = InserirNoFim(l1, 20);
	l1 = InserirNoFim(l1, 25);
	l1 = InserirNoFim(l1, 50);
	l1 = InserirNoFim(l1, 2);

	celula *l2 = NULL;
	l2 = InserirNoFim(l2, 11);
	l2 = InserirNoFim(l2, 14);
	l2 = InserirNoFim(l2, 15);
	l2 = InserirNoFim(l2, 16);
	l2 = InserirNoFim(l2, 17);
	
	celula *l3 = unir(l1, l2);
	ImprimirLista(l3);

	return 0;
}
