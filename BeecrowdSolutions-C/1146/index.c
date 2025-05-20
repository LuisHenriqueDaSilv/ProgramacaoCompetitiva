#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int x;
     while(1){
         scanf("%d", &x);
         if(x==0){
             break;
         }
         
         for(int i =1; i<=x; i++){
            printf("%d", i);
            if(i == x){
                printf("\n");
            } else {
                printf(" ");
            }
         }
     }
 
    return 0;
}