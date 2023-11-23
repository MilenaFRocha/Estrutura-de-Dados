#include <stdio.h>
#include <stdlib.h>

int buscaSequencial_Ordenado( int * vetor, int tamanho, int chave){
    for(int i = 0 ;i< tamanho && i<= chave; i++){
        if(vetor[i] == chave){
            return i;
        }
        else if(vetor[i] > chave){
            printf("chve não encontrada");
        }
    }
}

int BuscaBinaria_Ordenado(int * vet, int tamanho , int chave){

    int inicio =0;
    int fim = tamanho -1;

    while (inicio <= fim){

        int meio = (inicio + fim)/2;
        if (vet[meio]== chave){
            return meio;
            break;
        }
        if (vet[meio] > chave){
            fim = meio -1;

        }
        {
            inicio = meio +1;
        
        }
    }
    
}


int main(void){
     
     int vet[] = {1,2,3,4,4};
     printf("%d", buscaSequencial_Ordenado(vet ,5,4));
     
    printf("%d",BuscaBinaria_Ordenado(vet ,5,4));
    return 0;
}