#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* sig;
};

typedef struct Nodo* Lista;

void inicializarLista(Lista* lista){
    *lista=NULL;
}

void agregarAdelante (Lista* lista, int datoNuevo){
    Lista nuevoNodo = (Lista) malloc(sizeof (struct Nodo));
    nuevoNodo->dato = datoNuevo;
    nuevoNodo->sig = *lista;
    *lista = nuevoNodo;
}

void eliminarMultiplos (Lista* lista, int n){
    Lista actual = *lista;
    Lista anterior;
    inicializarLista(&anterior);
    while (actual!=NULL){
        if (!(actual->dato%n)){
            if (anterior==NULL){
                *lista=(*lista)->sig;
                free(actual);
                actual = *lista;
            }
            else{
                anterior->sig = actual->sig;
                free(actual);
                actual = anterior->sig;
            }
        }
        else{
            anterior=actual;
            actual=actual->sig;
        }
    }

}

void imprimirLista (Lista* lista){
    Lista aux =*lista;
    while (aux!=NULL){
        printf(" %d",aux->dato);
        if (aux->sig != NULL) printf(",");
        aux= aux->sig;
    }
    printf("\n");
}
int main()
{
    int i;
    Lista lista;
    inicializarLista(&lista);
    for (i=0;i<20;i++){
        agregarAdelante(&lista,rand()%100);
    }
    imprimirLista(&lista);
    eliminarMultiplos(&lista,2);
    imprimirLista(&lista);
    return 0;
}
