#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     char name[100];
     double a, b;
     scanf(" %s %lf %lf", name, &a, &b);
     printf("TOTAL = R$ %.2f\n", a+b*0.15);
    return 0;
}