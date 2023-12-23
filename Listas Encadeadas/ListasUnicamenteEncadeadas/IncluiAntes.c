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
//se usar numa lista ordenada da para usar busca binaria e ser um O(log(n))
Lista *IncluiAntes(Lista *inicioLista, int chave, int valor) 
{
    
    if(inicioLista == NULL){

        printf("Lista vazia");
        exit(1);
    }
    // ele verifica o primeiro no ?? acho q n 
    Lista *novoNo, *ponteiroAux;
    novoNo = (Lista *) malloc(sizeof(Lista));
    ponteiroAux= (Lista *) malloc(sizeof(Lista));
    novoNo->data = valor;
    ponteiroAux = inicioLista;
    while (ponteiroAux->ponteiroNo->data != chave){

        if(ponteiroAux->ponteiroNo -> ponteiroNo ==NULL){
            printf("Chave não encontrada");
            exit(1);
        }
        
        ponteiroAux = ponteiroAux->ponteiroNo;
    }
    novoNo->ponteiroNo = ponteiroAux->ponteiroNo;
    ponteiroAux->ponteiroNo = novoNo;
    return inicioLista;
}



  

