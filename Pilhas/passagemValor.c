
#include <stdio.h>

// so muda dentro da funcao pq 
void incrementByValue(int x) {
    x++;
}
int main() {
    int x = 42;
    int y = 41;
    //ponterio 1 = ponteiro2 -> vao apontar para o mesmo endereco
    //*ponterio1 = *ponterio2 -> ponteiro 1 tera o mesmo conteudo de 2
    // Obtendo o endereço de x
    int *p = &x;
    int *p2;
    *p2 = &y;

    // Imprimindo o endereço de x
    printf("Endereco de x: %p\n", (void*)&x);

    // Outra forma de imprimir o endereço de x usando o ponteiro p
    printf("Endereco de x via ponteiro p: %p\n", (void*)p);

  // Acessando o conteúdo através do ponteiro p
    printf("Conteudo de x via ponteiro p: %d\n", *p2);

    // Acessando o conteúdo através do ponteiro p
    printf("Conteudo de x via ponteiro p: %d\n", *p);
    p =p2;
    printf("novo %d",*p);
    int num = 5;
    incrementByValue(num);
    printf("Valor original: %d\n", num);  // Saída: Valor original: 5
    return 0;
}


