#include <stdio.h>

//esse ele muda o valor la no original
void incrementByReference(int *x) {
    (*x)++;
}

int main() {
    int num = 5;
    incrementByReference(&num);
    printf("Valor modificado: %d\n", num);  // Saída: Valor modificado: 6
    return 0;
}
