#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int n, input;
     scanf("%d", &n);
     for(int i =0; i<n; i++){
         scanf("%d", &input);
         if(input == 0){
             printf("NULL\n");
         } else {
             if(input%2 == 0){
                 printf("EVEN ");
             } else {
                 printf("ODD ");
             }
             
             if(input > 0){
                 printf("POSITIVE\n");
             } else {
                 printf("NEGATIVE\n");
             }
         }
     }
 
    return 0;
}