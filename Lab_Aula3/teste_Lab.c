#include <stdio.h>

int incluirEmVetorOrdenado(float *pvalores, float pv, int pcapacidade, int *ptamanho) {
    // Verifica se há espaço disponível no vetor
    if (*ptamanho >= pcapacidade) {
        return 0; // Falso, não há espaço para inclusão
    }

    // Encontra a posição adequada para inserir o valor
    int posicao = 0;
    while (posicao < *ptamanho && pvalores[posicao] < pv) {
        posicao++;
    }

    // Move os elementos para abrir espaço para o novo valor
    for (int i = *ptamanho; i > posicao; i--) {
        pvalores[i] = pvalores[i - 1];
    }

    // Insere o novo valor na posição adequada
    pvalores[posicao] = pv;

    // Atualiza o tamanho do vetor
    (*ptamanho)++;

    return 1; // Verdadeiro, inclusão bem-sucedida
}

int main() {
    float valores[10] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0}; // Vetor inicializado de 0 a 9
    int tamanho = 10; // Tamanho inicial do vetor

    // Inserir um novo valor no vetor ordenado
    float novoValor = 6.5; // Valor a ser inserido
    int inseridoComSucesso = incluirEmVetorOrdenado(valores, novoValor, 15, &tamanho);

    if (inseridoComSucesso) {
        printf("Vetor ordenado após a inserção: ");
        for (int i = 0; i < tamanho; i++) {
            printf("%.2f ", valores[i]);
        }
        printf("\n");
    } else {
        printf("Inclusão falhou. O vetor está cheio.\n");
    }

    return 0;
}
