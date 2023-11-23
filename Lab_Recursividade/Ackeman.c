#include <stdio.h>

// 2 e 3
int AckermannRecursivo(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return AckermannRecursivo(m - 1, 1);
    } else if (m > 0 && n > 0) {
        // ack(1 , ackman (2,2))
                    // ackman(1 ,ackam 2 , 1)
                            //ack(1 ,5)
                            //ack(0,ack 1 ,4)
                                //ack(0,ack(1,3))
                                        //ack(0,ack(1,2))
                                                //ack(0 ack(1,1))
                                                    //ack(0,ack(1,0))
                                                            
            return AckermannRecursivo(m - 1, AckermannRecursivo(m, n - 1));
    }
}

int main() {
    int m, n;
    printf("Digite os valores de m e n: ");
    scanf("%d %d", &m, &n);
    
    int resultado = AckermannRecursivo(m, n);
    
    printf("O resultado da função de Ackermann para m=%d e n=%d é: %d\n", m, n, resultado);
    
    return 0;
}
