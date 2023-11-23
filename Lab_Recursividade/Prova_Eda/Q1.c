#include <stdio.h>
int main(void){

int vet[] = {10,20,30};
    // declara um ponteiro para inteiro , apontando para a primeira posição do vetor
    int *p = vet;
    // ele move o ponteiro para uma posição a frente
    p++;
    printf("%d\n", *p);//20
    // muda o valor da posição para qual o ponteiro aponta
    (*p)++;
    printf("%d\n", *p);//21
    // desloca o ponteiro uma posiçaõ a frente e imprime o valor
    printf("%d\n", *(p+1));//30
    return 0;

    

    
}