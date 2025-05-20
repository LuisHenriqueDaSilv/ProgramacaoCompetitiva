#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int p, r;
     scanf("%d %d", &p, &r);
     
     if(p == 0){
         printf("C\n");
     } else if(r == 1){
         printf("A\n");
     } else {
         printf("B\n");
     }
 
    return 0;
}