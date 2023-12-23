
#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{

    int data;
    struct Lista* ponteiroNo;


}Lista;

typedef struct TLista
    {
        
    Lista *primeiroPonterio;
    int data;
    Lista *ultimoPonterio;

    }TLista;

//O(n)
Lista * InclusãoCalda( Lista *inicioLista, int valor) {   


    
    if(inicioLista == NULL){

        printf("Lista vazia");
        exit(1);
    }

    Lista *ponterioAuxiliar;
    Lista *novoNo;

    novoNo = (Lista*)malloc(sizeof(Lista));
    novoNo -> data = valor;
    novoNo -> ponteiroNo = NULL;
    

    ponterioAuxiliar = inicioLista;

    while(ponterioAuxiliar -> ponteiroNo != NULL){

        ponterioAuxiliar = ponterioAuxiliar -> ponteiroNo ;


    }
    ponterioAuxiliar -> ponteiroNo = novoNo;
    return inicioLista;
}

// se usar TLista vira O(1)
TLista * InclusãoCalda( TLista *inicioLista, int valor){

    Lista *novoPonteiro;
    novoPonteiro = (Lista*)malloc(sizeof(Lista));

    novoPonteiro->data = valor;

    novoPonteiro->ponteiroNo = NULL;
    
    inicioLista->ultimoPonterio->ponteiroNo = novoPonteiro;

    inicioLista ->ultimoPonterio = novoPonteiro;




    return inicioLista;
}
