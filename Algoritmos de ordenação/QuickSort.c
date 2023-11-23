#include <stdio.h>  

int separa (int v[], int p, int r) {
 int c = v[r]; // pivô
 int t, j = p;
 for (int k = p; k < r; ++k)
 if (v[k] <= c) {
 t = v[j], v[j] = v[k], v[k] = t;
 ++j;
 }
 t = v[j], v[j] = v[r], v[r] = t;
 return j;
 }
 int main (void){

    int vet[]= {'b', 'd', 'a', 'b' ,'c'};
    printf("%d,",separa(vet, 0, 4));
    return 0;
 }
