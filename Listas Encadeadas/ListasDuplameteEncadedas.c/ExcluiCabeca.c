#include <stdio.h>
#include<stdlib.h>

typedef struct No{

    struct No *ponteiroA;
    int data;
    struct No *ponteiroP; 
}No;

No *ExcluiCabeca(No * inicioLista){

    inicioLista = inicioLista->ponteiroP;
    free(inicioLista->ponteiroA);
    inicioLista ->ponteiroA =NULL;
    return inicioLista;
}