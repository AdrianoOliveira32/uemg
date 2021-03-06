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
celula *RemoverCelula(celula *lista, int valor)
{
	celula *aux = lista; //ponteiro para percorrer a lista
	celula *ant = NULL; // ponteiro para elem anterior
	while (aux != NULL && aux->elemento != valor)
	{
		ant = aux;
		aux = aux->proxima;
	}
	if (aux == NULL)
	{
		cout << "\nElemento nao encontrado.";
		return lista; // retorna lista original
	}
	else if (ant == NULL)  //retira elemento do inicio
	{
		lista = aux->proxima;
	}
	else  //retira elem do meio ou do final da lista
	{
		ant->proxima = aux->proxima;
	}
	delete aux;
	return lista;
}


celula *elimina(celula *lista)
{
	celula *aux = lista;
	celula *aux2 = lista;
	int n = 0;
	while(aux)
	{
		aux2 = lista;
		/*while(aux2)
		{
			if(aux != aux2 && aux->elemento == aux2->elemento)
			{
				n = aux2->elemento;
				aux2 = aux->proxima; 
				lista = RemoverCelula(lista, n);
				}
			aux2 = aux2->proxima;
		}*/
		aux = aux->proxima;
		cout << ".";
	}
	return lista;
}



int main()
{
	celula *l1 = NULL;
	l1 = InserirNoFim(l1, 20);
	l1 = InserirNoFim(l1, 25);
	l1 = InserirNoFim(l1, 25);
	l1 = InserirNoFim(l1, 50);
	l1 = InserirNoFim(l1, 2);
	l1 = InserirNoFim(l1, 25);

	l1 = elimina(l1);
	ImprimirLista(l1);

	return 0;
}
