#include <stdio.h>


void insertionSort(int list[], int n)
{
    int i, j;
    int next;
    for (i=1; i<n; i++) {
    next= list[i];
    for (j=i-1; j>=0 && next < list[j] ; j--) {
        
        list[j+1] = list[j];

    }
    list[j+1] = next;
    
    }
}
int main(void ){

    int vet[] = {1,4,3,2,5};
    int n = 5;

    insertionSort(vet,n);

    for (int i =0 ; i<n;i++){
        printf("%d",vet[i]);
    }
    

    return 0 ;
}