#include <stdio.h>
#include <stdlib.h>

typedef struct No{

    struct No *ponteiroA;
    int data;
    struct No *ponteiroP; 
}No;

No *IncluiDepois(No *inicioLista, int valor,int chave){

    No *novoNo = (No*)malloc(sizeof(No));
    No *ponteiroAux = (No*)malloc(sizeof(No));

    novoNo -> data = valor;
    ponteiroAux = inicioLista;

    while(ponteiroAux-> ponteiroP ->data != chave){

        ponteiroAux = ponteiroAux->ponteiroP;
    }
    novoNo->ponteiroP = ponteiroAux ->ponteiroP;
    novoNo ->ponteiroA = ponteiroAux;
    ponteiroAux ->ponteiroP = novoNo;
    novoNo->ponteiroP->ponteiroA = novoNo;
    return inicioLista;
}