int BuscaBinaria_Ordenado(int * vet, int tamanho , int chave){

    int inicio =0;
    int fim = tamanho -1;

    while (inicio <= fim){

        int meio = (inicio + fim)/2;
        if (vet[meio]== chave){
            return meio;
            break;
        }
        if (vet[meio] > chave){
            fim = meio -1;

        }
        {
            inicio = meio +1;
        
        }
    }
    
}
