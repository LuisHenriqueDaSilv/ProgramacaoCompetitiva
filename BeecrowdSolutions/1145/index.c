#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int x,y;
     scanf("%d %d", &x, &y);
     for(int i=1; i<=y; i++){
         printf("%d", i);
         if(i%x ==0){
             printf("\n");
         } else {
             printf(" ");
         }
         
     }
 
    return 0;
}