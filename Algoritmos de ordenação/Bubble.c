#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// compara par por par sequencialmente
int BubleSort(int * v, int tamanho){
    int i;
    int ok =0;
    // ele passa no vetor n vezes 
    for(int j = 0; j < tamanho && ok ==0; j++){
     ok = 1;
    // esse - j impede que ele compare com o ultimo elemento que já está ordenado
    for(i = 0; i < tamanho-1-j; i++){
        // passo 1
        if(v[i] > v[i+1]){
            ok = 0;
            swap(&v[i], &v[i+1]);
        }
    }
    }
}
int main(void ){

    int vet[]= {5, 4, 3, 2 ,2,21};
    int tamanho =6;

    BubleSort(vet, tamanho);
    for(int i = 0; i < tamanho; i++){
        printf("%d,", vet[i]);
    }

    return 0;
}