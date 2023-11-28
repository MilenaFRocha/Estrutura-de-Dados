#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection(int vet[],int tam){
    int j =0;

    for(j =0 ;j <tam;j++){
        int index = j;
        for(int i =j ; i <=tam - 1 ;i++){

        if(vet[i]< vet[index] ){
            index = i;
        }
        }
        if(vet[j]> vet[index]){
            swap(&vet[j],&vet[index]);
        }
    }

}


int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = 5;

    printf("Array desordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    selection(arr, size);

    printf("\nArray ordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// um for para o i que comeca no indice exato e outro para o j que comeca no i + 1 para comparar o elemento da frente e dai se for maior ele faz a troca