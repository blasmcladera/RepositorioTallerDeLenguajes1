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

void vaciarLista (Lista* lista){
    Lista actual = *lista;
    Lista aux;
    while (actual!=NULL){
        actual = actual->sig;
        free (aux);
        aux = actual;
    }
    *lista=NULL;
}

void agregarAdelante (Lista* lista, int datoNuevo){
    Lista nuevoNodo = (Lista) malloc(sizeof (struct Nodo));
    nuevoNodo->dato = datoNuevo;
    nuevoNodo->sig = *lista;
    *lista = nuevoNodo;
}

void agregarAtras (Lista* lista, int datoNuevo){
    Lista nuevoNodo = (Lista) malloc(sizeof (struct Nodo));
    nuevoNodo->dato = datoNuevo;
    nuevoNodo->sig = NULL;
    Lista actual = *lista;
    if (*lista == NULL){
        *lista = nuevoNodo;
        return;
    }
    while (actual->sig!=NULL){
        actual= actual->sig;
    }
    actual->sig = nuevoNodo;
}

int listaLength (Lista* lista){
    int i =0;
    Lista aux = *lista;
    while (aux!=NULL){
        i++;
        aux = aux->sig;
    }
    return i;
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
    return 0;
}


