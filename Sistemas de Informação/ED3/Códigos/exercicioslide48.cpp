#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

struct celula {
    int matricula;
    string nome;
    float media;
    celula *proxima;
};

celula *insereOrdenado(celula *lista, int m, string n, float me){
    celula *nova = new celula;
    nova->matricula = m;
    nova->nome = n;
    nova->media = me;
    if(lista == NULL){
        nova->proxima = NULL;
        lista = nova;
    }
    else{
        celula *aux = lista;
        celula *ant = NULL;
        while(aux != NULL && nova->matricula > aux->matricula){
            ant = aux;
            aux = aux->proxima;
        }
        if(ant == NULL){
            nova->proxima = lista;
            lista = nova;
        }
        else{
            ant->proxima = nova;
            nova->proxima = aux;
        }
    }
    return lista;
}

void ImprimirLista(celula *lista) {
    celula *aux = lista;
    if (!lista)
        cout << "Lista vazia";
    else {
        while (aux != NULL) {
            cout << aux->matricula << " - " << aux->nome << endl;
            aux = aux->proxima;
        }
    }
}


celula *EsvaziarLista(celula *lista)
{
    celula *aux = lista;//Ponteiro que percorre a lista
    celula *atual = NULL; //Ponteiro para o Nó que será removido
    while (aux != NULL)  // Percorre a Lista
    {
        atual = aux;
        aux = aux->proxima;
        delete atual;
    }
    return NULL;
}




int main() {
    celula *listaAlunos = NULL;
    listaAlunos = insereOrdenado(listaAlunos, 102, "Mailson", 8);
    listaAlunos = insereOrdenado(listaAlunos, 110, "Queiroz", 9);
    listaAlunos = insereOrdenado(listaAlunos, 101, "Proenca", 8);
    ImprimirLista(listaAlunos);
    cin.ignore().get();
    return 0;
}