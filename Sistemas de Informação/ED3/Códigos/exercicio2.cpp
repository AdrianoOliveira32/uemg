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


celula *constroi(int n, int *vetor){
    celula *lista = NULL;
    for (int i = 0; i < n; ++i) {
        lista = InserirNoInicio(lista, vetor[i]);
    }
    return lista;
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
    int vetor[] = {1,2,3,4,5,6};
    celula *lista1 = constroi(6,vetor);
    ImprimirLista(lista1);

    return 0;
}