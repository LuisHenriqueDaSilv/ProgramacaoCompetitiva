#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int a;
     scanf("%d", &a);
     if(a > 1400){
         printf("%d\n", 3);
     } else if(a>800) {
        printf("%d\n", 2);
     } else {
        printf("%d\n", 1); 
     }
 
    return 0;
}