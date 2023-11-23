#include <stdio.h>
#include <stdlib.h>

#define TAM_LINHA 1000 // Tamanho máximo de uma linha

// Definindo a estrutura de dados
typedef struct {
    char IBGE[8]; // Mais um para o caractere nulo '\0'
    int linha;
} Dados;

int main(void) {
    FILE *fp;
    Dados *vetStruct;
    int numLinhas = 4; // Número de linhas conhecido
    int tamanhoLinha = 8; // Tamanho de cada linha
    int tamanhoPrimeiraLinha = 0;

    fp = fopen("C:\\Users\\milen\\OneDrive\\Documentos\\Estrutura de Dados\\Lab_Busca\\te.csv", "r");


    if (fp == NULL) {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    } else {
        printf("Arquivo aberto com sucesso\n");

        // Alocando o vetor de estruturas
        vetStruct = (Dados *)malloc(numLinhas * sizeof(Dados));

        if (vetStruct == NULL) {
            printf("Erro na alocação de memória\n");
            exit(1);
        } else {
            while (fgetc(fp) != '\n') {
            tamanhoPrimeiraLinha++;
        }

        printf("Tamanho da primeira linha em bytes: %d\n", tamanhoPrimeiraLinha);
        
            // Ler as linhas do arquivo
            for (int i = 0; i < numLinhas; i++) {
                // Posicionar o ponteiro na linha desejada
                fseek(fp, i * tamanhoLinha, SEEK_SET);

                // Ler os 7 primeiros caracteres
                fread(vetStruct[i].IBGE, sizeof(char), 7*(i+1), fp);
                 

             
            }

            // Imprimir os valores IBGE
            printf("Valores IBGE:\n");
            for (int i = 0; i < numLinhas; i++) {
                printf("%s\n", vetStruct[i].IBGE);
            }
        }

        fclose(fp);
        free(vetStruct); // Liberar memória alocada
    }

    return 0;
}
