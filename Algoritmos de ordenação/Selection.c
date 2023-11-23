#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        

        // Encontre o índice do menor elemento na parte desordenada.
        for (j = i + 1; j < size; j++) {
            //compara com a posicao da frente e depois no for de cima ele n compara com o mesmo
            if (arr[j] < arr[i]) {
            
                swap(&arr[i], &arr[j]);
            }
        }

        // Troque o elemento mínimo com o elemento na posição atual.
    }
}
void selectionSort(int vet[], int tam){
 int i, min, aux;
 for(i=0; i<tam; i++){
 //Acha posicao do menor elemento a partir de i:
 min = smallerIndex(vet, tam, i);
 aux = vet[i];
 vet[i] = vet[min];
 vet[min] = aux;
 }
 }
 int smallerIndex(int vet[], int tam, int ini){
 int min = ini, j;
 for(j=ini+1; j<tam; j++){
 if(vet[min] > vet[j])
 min = j;
 }
 return min;
 }

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, size);

    printf("\nArray ordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// um for para o i que comeca no indice exato e outro para o j que comeca no i + 1 para comparar o elemento da frente e dai se for maior ele faz a troca