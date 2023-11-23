#include <stdio.h>
#include <math.h>
#include <string.h>

    // int somaInt(int a  ){
    //     if (a == 0){
    //          return 0;
    //     }
    //     else{
    //        int soma = a%10 + somaInt(a/10);
    //         return soma;
    //     }
    //}
    // int multiplicacaoInt(int a , int b ){
    //     if ( a == 0  || b == 0){
    //         return 0;
    //     }
    //     if (a == 1 ){
    //         return b;
    //     }
    //     if (b ==1){
    //         return a;
    //     }
    //     if (a < 0 && b < 0){
    //         a = a * -1;
    //         b = b * -1;
    //     }
    //     if(a< 0 || b <0){
    //         if (a < 0){
    //             a = a * -1;
    //             int mult = a + multiplicacaoInt(a,b-1);
    //             return mult * -1;
    //         }
    //         if (b < 0){
    //             b = b * -1;
    //             int mult = a + multiplicacaoInt(a,b-1);
    //             return mult * -1;
    //         }
    //     }
    //     else{
    //         int mult = a + multiplicacaoInt(a,b-1);
    //         return mult; 

    //     }

    // }

    // int potenciaInt( int x , int n){

    //     if(n == 0 ){
    //         return 1 ;
    //     }
    //     if(n == 1 ){
    //         return x ;
    //     }
    //     else{
    //         int pot = x * potenciaInt(x,n-1);
    //         return pot ;
    //     }
    // }
    
    // passa os ponteiros da palavra e do tamanho , o inicio e o fim
    // comapara o primeiro e o ultimo
    // passa recursividade deslocando o ponteiro de inicio (+1) e o de fim(-1)
    // a de parada é quando o inicio for maior que o fim ou quando compararem o mesmo endereço de memória  

// Function to check if a string is a palindrome
// int palindromo(char *s, int inicio, int fim) {
//     if (inicio >= fim) {
//         return 1;
//     }
//     if (s[inicio] != s[fim]) {
//         return 0;
//     }
//     return palindromo(s, inicio + 1, fim - 1);
// }

// int ElementoVet( int *vet , int elemento, int tamanho){
//     if (vet[tamanho] == elemento){
//         return tamanho +1;
//     }
//     else{
        
//             return maiorElementoVet(vet,elemento,tamanho-1);
//         }
        
// }

int maiorElementoVet(int *vet,int tamanho){
    if (tamanho == 1){
        return vet[tamanho-1];
    }
    else{
        int maior = maiorElementoVet( vet, tamanho -1);

        printf("(%d)\n",vet[tamanho-1]);
        if(maior<vet[tamanho-1]){
            return vet[tamanho-1];
        }
        else{
            return maior;
        }
    }
    
}

int main(void) {
    //char nomeA[] = "maam";

    int vet[] = {4,7,1,9,5};
   
    int tamanho = 5;

    printf("%d",maiorElementoVet(vet,tamanho));

    

    return 0;
}