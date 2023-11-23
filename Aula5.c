#include <stdio.h>
int main() {
int numero, *ptr;


numero = 79417;
// faço o ponteiro apontar para o endereço de memória da variável numero
//ira printar algo como :OX7ffccf8c
ptr = &numero;

// eu atribuo o conteudo para dentro da variavel apontada pelo ponteiro
*ptr = 90560;

printf(" %d\n", numero);
return 0;
}
