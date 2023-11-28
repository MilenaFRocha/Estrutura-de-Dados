int buscaSequencialDesordenada(int *V, int n, int chave){
 int p, posic = -1;
 for(p=0;p<n;p++){
    if(chave == V[p]){
        posic = p;
    }
 }
 return posic;
 }
