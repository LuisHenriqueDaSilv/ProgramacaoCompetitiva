#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int sumpar=0, sumneg=0,sumpos=0,  input =0;
     for(int i=0; i<5; i++){
         scanf("%d", &input);
         if(input%2 == 0){
             sumpar++;
         } 
         if(input < 0){
             sumneg++;
         } else if (input >0){
             sumpos++;
         }
     }
     
    printf("%d valor(es) par(es)\n", sumpar);
    printf("%d valor(es) impar(es)\n", 5-sumpar);
    printf("%d valor(es) positivo(s)\n", sumpos);
    printf("%d valor(es) negativo(s)\n", sumneg);
 
    return 0;
}