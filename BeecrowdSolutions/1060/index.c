#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int n = 0;
     float input;
     
     for(int i=0; i<6; i++){
         scanf("%f", &input);
         if(input > 0){
            n++;
         }
     }
     
     printf("%d valores positivos\n", n);
 
    return 0;
}