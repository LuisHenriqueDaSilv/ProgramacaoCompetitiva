#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int a, n = 0;
     for(int i =0; i<5; i++){
         scanf("%d", &a);
         if(a%2 == 0){
             n++;
         }
     }
     
     printf("%d valores pares\n", n);
 
    return 0;
}