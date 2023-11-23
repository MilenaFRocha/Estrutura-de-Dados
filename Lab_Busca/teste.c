#include <stdio.h>

int main() {

    int linha_Bytes = 196;
    FILE *fp = fopen("C:\\Users\\milen\\OneDrive\\Documentos\\Estrutura de Dados\\Lab_Busca\\s.csv", "r");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo\n");
        return 1;
    }

    // Movendo o ponteiro para 102 bytes a partir do início do arquivo
    fseek(fp, linha_Bytes + 1 , SEEK_SET);

    // Lendo e imprimindo os próximos 10 bytes (ajuste conforme necessário)
    int n = 7;
    char buffer[n + 1];  // +1 para o caractere nulo
    size_t bytesRead = fread(buffer, 1, n, fp);
    buffer[bytesRead] = '\0';  // Adiciona um caractere nulo ao final para garantir que seja uma string

    // Imprimindo o conteúdo lido
    printf("Conteudo lido: %s\n", buffer);
    printf("%d",bytesRead);

    // Fechando o arquivo
    fclose(fp);

    return 0;
}
