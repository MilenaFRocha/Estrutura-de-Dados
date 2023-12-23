//Empilhamento
#include <stdio.h>
#include <stdlib.h>

typedef struct No{

    int data;
    struct No *ponterioP;
}No;

No * Empilhar (No* topo, int valor){
    No *novoNo = (No*)malloc(sizeof(No));

    novoNo -> data = valor;
    novoNo ->ponterioP = topo;

    //esse será o novo topo
    return novoNo;


}
