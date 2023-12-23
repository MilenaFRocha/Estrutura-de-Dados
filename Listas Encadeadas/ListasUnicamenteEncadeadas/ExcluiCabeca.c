

#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{

    int data;
    struct Lista* ponteiroNo;


}Lista;

//parece uma lista duplamente encadeada
typedef struct TLista
    {
        
    Lista *primeiroPonterio;
    int data;//quantidade
    Lista *ultimoPonterio;

    }TLista;
    
Lista *ExcluiCabeça(Lista *inicioLista) 
//O(1)
{

    
    if(inicioLista == NULL){

        printf("Lista vazia");
        exit(1);
    }
    Lista* ponteiroAux;

    ponteiroAux = inicioLista;
    inicioLista = inicioLista->ponteiroNo;
    free(ponteiroAux);

    return inicioLista;
}
TLista *ExcluiCabeça(TLista *inicioLista){
//O(1)

    Lista *ponteiroAux;
    ponteiroAux = inicioLista->primeiroPonterio;
    inicioLista->primeiroPonterio = inicioLista->primeiroPonterio->ponteiroNo;
    //posso dar um free(ponteiro)??



    return inicioLista;
}