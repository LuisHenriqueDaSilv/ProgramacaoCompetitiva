#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int a, qa, b, qb;
     float pa, pb;
     scanf("%d %d %f", &a, &qa, &pa);
     scanf("%d %d %f", &b, &qb, &pb);
     printf("VALOR A PAGAR: R$ %.2f\n", qa*pa+qb*pb);
 
    return 0;
}