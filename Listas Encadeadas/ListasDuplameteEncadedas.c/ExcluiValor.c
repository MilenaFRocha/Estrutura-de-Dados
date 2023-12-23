#include <stdio.h>
#include<stdlib.h>

typedef struct No{

    struct No *ponteiroA;
    int data;
    struct No *ponteiroP; 
}No;

No *ExcluiChave(No *inicioLista, int chave){
    
    No* ponteiroAux = (No*)malloc(sizeof(No));

    ponteiroAux = inicioLista;

    while(ponteiroAux ->data != chave){
        ponteiroAux= ponteiroAux->ponteiroP;

    }
    ponteiroAux ->ponteiroA ->ponteiroP= ponteiroAux->ponteiroP;
    ponteiroAux->ponteiroP ->ponteiroA = ponteiroAux-> ponteiroA;
    free(ponteiroAux);
    

    return inicioLista;
}
