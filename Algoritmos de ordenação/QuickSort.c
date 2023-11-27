#include <stdio.h>  
// eu sempre mando os menores que o pivo la pro começo e o amarleo serve para eu achar as posicoes de coemeco
int swap(int *a, int *b){
   int aux = *a;
   *a = *b;
   *b = aux;
   return 0;
}
// a linha amarela fica na posicao de n - 1, onde n é a quantidade de elementos menores que o pivo
int separa (int v[], int inicio, int fim) {
   // semrpe escolhe o pivo como o ultimo elemento
 int pivo = v[fim]; // pivô
 int amarelo = inicio;

 //faz a linha roxa percorrer o vetor até achar um elemento menor que o pivo
 for(int roxo = inicio; roxo < fim; roxo++)

 // quando acha um elemento menor que o pivo, troca o elemento da linha amarela com o elemento da linha roxa
 if (v[roxo] <= pivo) {
   //achei e mando ele la´para o começo
   swap(&v[amarelo], &v[roxo]);
 
 //agora posicao da amaerla vai estar ocupada entao mando ela para a proxima posicao
 amarelo++;
 }
 //a amarela é a posicao do pivo e o pivo é o ultimo elemento, entao troco o pivo com a linha amarela
   swap(&v[amarelo], &v[fim]);
 return amarelo;
 }
 int quicksort (int v[], int inicio, int fim) {
   if (fim <= inicio) 
   return 0;
   int p = separa (v, inicio, fim);
   quicksort (v, inicio, p-1);
   quicksort (v, p+1, fim);
   return 0;
   }
 int main (void){

    int vet[]= {'b', 'd', 'a', 'b' ,'c'};
    quicksort(vet, 0, 4);
   for(int i = 0; i < 5; i++){
      printf("%c,",vet[i]);
   }
    
    return 0;
 }
