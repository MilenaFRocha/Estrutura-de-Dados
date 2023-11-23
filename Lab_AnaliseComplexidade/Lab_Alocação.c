#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fporiginal, *fpnovo;
    char ch, chPedido;

    fporiginal = fopen("testes.txt", "r");

    if (fporiginal == NULL) {
        printf("Erro na abertura do arquivo 'testes.txt'\n");
        exit(1);
    }

    scanf(" %c", &chPedido);

    if (chPedido == 'T') {
        fpnovo = fopen("esforcoComp.txt", "w");
        if (fpnovo == NULL) {
            printf("Erro na abertura do arquivo 'esforcoComp.txt'\n");
            exit(1);
        } else {
            while ((ch = fgetc(fporiginal)) != EOF) {
                fputc(ch, fpnovo);
            }
            fclose(fpnovo);  // Feche o arquivo fpnovo após a cópia
        }
    }

    fclose(fporiginal);  // Feche o arquivo fporiginal após a cópia
    return 0;
}
