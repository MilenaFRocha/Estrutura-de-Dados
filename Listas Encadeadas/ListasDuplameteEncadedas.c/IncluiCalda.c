#include <stdio.h>
#include <stdlib.h>

typedef struct NO{

    struct No *ponteiroA;
    int data;
    struct No *ponteiroP;
    
}No;


No *IncluiCalda(No *inicioLista, int valor){

    No* ponteiroAux = (No*)malloc(sizeof(No));
    No *novoNo = (No*)malloc(sizeof(No));

    novoNo -> data = valor;
    novoNo -> ponteiroP = NULL;

    ponteiroAux = inicioLista;
    while(ponteiroAux -> ponteiroP != NULL){
        ponteiroAux = ponteiroAux->ponteiroP;
    }
    // achei o null e mando ele apontar pro novo no
    ponteiroAux ->ponteiroP = novoNo;

    novoNo->ponteiroA = ponteiroAux ;


    return inicioLista;
}