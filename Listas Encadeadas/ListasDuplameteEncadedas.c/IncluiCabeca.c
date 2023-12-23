#include <stdio.h>
#include <stdlib.h>

typedef struct No{

    struct No *ponteiroA;
    int data;
    struct No *ponteiroP; 
}No;

No *IncluiCabeca(No *inicioLista, int valor){

    No *novoNo;
    novoNo = (No*)malloc(sizeof(No));

    novoNo -> data = valor;

    novoNo -> ponteiroA = NULL;
    novoNo ->ponteiroP = inicioLista;
    //apontar para o mesmo lugar q o ponteiro
    inicioLista -> ponteiroA= novoNo;
    inicioLista = novoNo;
    return inicioLista;
}

