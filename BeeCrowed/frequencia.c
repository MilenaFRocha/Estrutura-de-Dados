#include <stdio.h>

void buscaChave(int *vet, int tamanho, int chave){
        int repeticoes = 0;
    for(int i = 0; i < tamanho; i++){
        if(vet[i] == chave){
            repeticoes++;
            
        }
    }
   
        printf("%d aparece %d vez(es)\n",chave,repeticoes);
    
    
    
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void ){

    int tamanho;
    scanf("%d", &tamanho);

    int vet[tamanho];

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0 ; i< tamanho ;i ++){

        for( int j = i +1 ;j <= tamanho ;j++){
            if(vet[i]>vet[j]){
                swap(&vet[i],&vet[j]);

            }

        }
    }


    for(int i = 0; i < tamanho; i++){
        if(vet[i] == vet[i+1]){
            continue;
        }else
        buscaChave(vet, tamanho, vet[i]);
    }


    return 0 ;
}