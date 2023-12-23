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
 
 Lista *ExcluiValor(Lista * inicioLista, int valor ){
//se usar TLista e for ordenada da para usar busca binaria e vira O(nLog(n))
//O(n)
        
    if(inicioLista == NULL){

        printf("Lista vazia");
        exit(1);
    }

        Lista * ponteiroAux;
        Lista *ponteiroPos;

        ponteiroAux = inicioLista;

        while(ponteiroAux-> ponteiroNo -> data != valor)
        {
            
        if(ponteiroAux->ponteiroNo -> ponteiroNo ==NULL){
            printf("Chave não encontrada");
            exit(1);
        }
        
            ponteiroAux= ponteiroAux -> ponteiroNo;
        }
        ponteiroPos = ponteiroAux->ponteiroNo;
        free(ponteiroAux->ponteiroNo);
        ponteiroAux -> ponteiroNo = ponteiroPos;
        return inicioLista;


    }
