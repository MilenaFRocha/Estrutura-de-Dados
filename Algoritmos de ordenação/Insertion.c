#include <stdio.h>

//  4 3 2 5 
void insertionSort(int list[], int n)
{
    int i, j;
    int chave;
    for (i=1; i<n; i++) {
    // chave = 4 
    chave = list[i];
    for (j=i-1; j>=0 && chave < list[j] ; j--) {
        //jogando para a direita o 4 
        list[j+1] = list[j];
        // depois disso list[i] = 3
        // por isso que preciso do valor de list[i] salvo la no comeco ,pq depois da atribuição essa vslor muda

    }
    // achei onde a chave deve estar
    list[j+1] = chave;
    
    }
}
int main(void ){

    int vet[] = {1,4,3,2,5};
    int n = 5;

    inser(vet,n);


    for (int i =0 ; i<n;i++){
        printf("%d",vet[i]);
    }
    

    return 0 ;
}