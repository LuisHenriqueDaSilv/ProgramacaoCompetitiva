#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     float a, b, c;
     scanf("%f %f %f", &a, &b, &c);
     
     if(a+b > c && a+c > b && c+b > a){
         printf("Perimetro = %.1f\n", a+b+c);
     } else {
         printf("Area = %.1f\n", (a+b)*c/2);
     }
 
    return 0;
}