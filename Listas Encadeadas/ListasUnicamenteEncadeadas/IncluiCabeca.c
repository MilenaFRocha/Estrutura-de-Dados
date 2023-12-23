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


//Essa funçaõ retorna um ponteiro do tipo Lista
//Pede um ponteiro do tipo Lista para ser o inicio da lista pq queremos inserir um novo valor na cabeça
// O(1)
Lista *IncluiCabeca(Lista *ponteiroLista, int valor)
{


    if(ponteiroLista == NULL){

        printf("Lista vazia");
        exit(1);
    }
// serve so para add uma nova posição da minha lista , mas n posso desalocar pq senao o inicio da lista n sabe para onde apontar e 
Lista *novoNo;

// fazenod alocação dinâmica de um ponteiro para o novo nó
novoNo = (Lista *) malloc(sizeof(Lista));

// colocando na area data do ponteiro o valor desejado
novoNo->data = valor;

// o ponteiro do novo no ira apontar para o inicio da lista
novoNo-> ponteiroNo = ponteiroLista;

//atualizando a lista
ponteiroLista = novoNo;

// retorna o inicio da lista nova
return ponteiroLista;
}


//O(1)
TLista * IncluiCabeca( TLista *inicioLista, int valor){

    Lista *novoPonteiro = (Lista*)malloc(sizeof(Lista));

    novoPonteiro-> data = valor ;
    novoPonteiro -> ponteiroNo= inicioLista->primeiroPonterio;
    inicioLista->primeiroPonterio = novoPonteiro;



    return inicioLista;
}
