#include <stdio.h>
#include<stdlib.h>

typedef struct No{

    struct No *ponteiroA;
    int data;
    struct No *ponteiroP; 
}No;


No * ExcluiCalda(No *inicioLista){

    No *ponteiroAux = (No*)malloc(sizeof(No));

    ponteiroAux = inicioLista;

    while(ponteiroAux ->ponteiroP ->ponteiroP != NULL){
        ponteiroAux = ponteiroAux->ponteiroP;
    }

    free(ponteiroAux -> ponteiroP);

    ponteiroAux->ponteiroP = NULL;

    return inicioLista; 


}