#include <stdio.h>  


void intecala (int inicio1metade, int inicio2metade, int final1metade, int v[])
 {
 int *w;
 w = malloc ((final1metade-inicio1metade) * sizeof (int));
 int i = inicio1metade, j = inicio2metade;
 int k = 0;

    while (i < inicio2metade && j < final1metade) {
        if (v[i] <= v[j])
        {
            w[k++] = v[i++];
        } 
        else{

            w[k++] = v[j++];
        } 
 }
    while (i < inicio2metade){

        w[k++] = v[i++];
    }
    while (j < final1metade){
        w[k++] = v[j++];
    } 
        
     for(i = inicio1metade; i < final1metade; ++i){

        v[i] = w[i-inicio1metade];
    } 
 free (w);
 }
void mergeSort (int inicio1metade, int final1metade, int v[])
 {
 if (inicio1metade < final1metade-1) {
 int inicio2metade = (inicio1metade + final1metade)/2;
 mergeSort (inicio1metade, inicio2metade, v);
 mergeSort (inicio2metade, final1metade, v);
 intercala(inicio1metade, inicio2metade, final1metade, v);
 }
}
int main ( void){


    int 
    return 0;
}
