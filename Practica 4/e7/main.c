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

void imprimirLista (Lista* lista){
    Lista aux =*lista;
    while (aux!=NULL){
        printf(" %d",aux->dato);
        if (aux->sig != NULL) printf(",");
        aux= aux->sig;
    }
    printf("\n");
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

int main()
{
    int i,n;
    Lista listaAdelante, listaAtras;
    inicializarLista(&listaAdelante);
    inicializarLista(&listaAtras);
    for (i=0;i<10;i++){
        printf("Ingrese n: \n");
        scanf("%d",&n);
        agregarAdelante(&listaAdelante,n);
        agregarAtras(&listaAtras,n);
    }
    imprimirLista(&listaAdelante);
    printf("%d",listaLength(&listaAdelante));
    imprimirLista(&listaAtras);
    printf("%d",listaLength(&listaAtras));
    return 0;
}
