#include <stdio.h>
#include <stdlib.h>
//5570 numero de linhas

typedef struct {
    int IBGE;
    int linha;
}dados;

int BuscaBinaria_Ordenado(dados *vet, int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vet[meio].IBGE == chave) {
            return vet[meio].linha;
        } else if (vet[meio].IBGE > chave) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    // Se a chave não foi encontrada, você pode retornar um valor indicando isso, por exemplo, -1.
    return -1;
}


int main() {

    int linha_Bytes = 197;
    FILE *fp = fopen("C:\\Users\\milen\\OneDrive\\Documentos\\Estrutura de Dados\\Lab_Busca\\s.csv", "r");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo\n");
        return 1;
    }

    dados *vet = (dados*)malloc(sizeof(dados)*5570 );
    for( int i =0; i<5570;i++){
    //     if(i == 0){
    //         fseek(fp, 0, SEEK_SET);
    //         int n = 7;
    // char buffer[n + 1];  // +1 para o caractere nulo
    // size_t bytesRead = fread(buffer, 1, n, fp);
    // buffer[bytesRead] = '\0';  // Adiciona um caractere nulo ao final para garantir que seja uma string
    // int chave = atoi(buffer);

    // // Imprimindo o conteúdo lido
    // printf("Conteudo lido: %s\n", buffer);
    //     }else{

    // Movendo o ponteiro para 102 bytes a partir do início do arquivo
    fseek(fp, (linha_Bytes *i) , SEEK_SET);

    // Lendo e imprimindo os próximos 10 bytes (ajuste conforme necessário)
    int n = 7;
    char buffer[n + 1];  // +1 para o caractere nulo
    size_t bytesRead = fread(buffer, 1, n, fp);
    buffer[bytesRead] = '\0';  // Adiciona um caractere nulo ao final para garantir que seja uma string
    int chave = atoi(buffer);
    //printf("%d\n",chave);
    vet[i].IBGE = chave;
    vet[i].linha = i;


    // Imprimindo o conteúdo lido
    
    

        //}
    }
    char linha[102] ;
    int chavePedida;
    printf("Digite a chave que deseja buscar: ");
    scanf("%d", &chavePedida);
    int posicao = BuscaBinaria_Ordenado(vet, 5570, chavePedida);
    fseek(fp, (linha_Bytes * vet[posicao].linha) , SEEK_SET);
    fgets(linha, sizeof(linha), fp);
    printf("%s", linha);

    // Fechando o arquivo
    fclose(fp);

    return 0;
}
