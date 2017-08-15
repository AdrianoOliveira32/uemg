#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

struct celula {
    int elemento;
    celula *proxima;
};

void ImprimirLista(celula *lista) {
    celula *aux = lista;
    if (!lista)
        cout << "Lista vazia";
    else {
        while (aux != NULL) {
            cout << aux->elemento << endl;
            aux = aux->proxima;
        }
    }
}

celula *InserirNoInicio(celula *lista, int elemento) {
    celula *nova = new celula;
    nova->elemento = elemento;
    nova->proxima = lista;
    return nova;
}

celula *InserirNoFim(celula *lista, int valor) {
    celula *nova = new celula;
    nova->elemento = valor;
    if (!lista)  //lista == NULL
    {
        nova->proxima = lista;
        return nova;
    } else {
        celula *aux = lista; //procura pelo fim da lista
        while (aux->proxima != NULL) {
            aux = aux->proxima;
        }
        aux->proxima = nova;
        nova->proxima = NULL;
        return lista;
    }
}

celula *Separa(celula *lista, int n){
    celula *aux = lista, *aux2;
    while(aux != NULL && aux->elemento != n){
        aux = aux->proxima;
    }
    if(aux == NULL){
        return NULL;
    }
    else{
        aux2 = aux->proxima;
        aux->proxima = NULL;
        return aux2;
    }
}


int main() {
    celula *lista1 = NULL;
    lista1 = InserirNoFim(lista1, 3);
    lista1 = InserirNoFim(lista1, 17);
    lista1 = InserirNoFim(lista1, 5);
    lista1 = InserirNoFim(lista1, 12);
    lista1 = InserirNoFim(lista1, 1);

    ImprimirLista(lista1);
    celula *lista2 = NULL;
    lista2 = Separa(lista1, 5);

    cout << endl<<endl;
    ImprimirLista(lista1);
    cout << "_________________\n";
    ImprimirLista(lista2);
    // celula *lista2 = Separa(lista1, 5);

    return 0;
}