#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int nOfValidInputs = 0, success;
     float input, sum =0;
     while(nOfValidInputs < 2){
         success = scanf("%f", &input);
         if(input > 10 || input < 0 || success != 1){
             printf("nota invalida\n");
             continue;
         }
         sum+=input;
         nOfValidInputs++;
     }
     
     printf("media = %.2f\n", (float)(sum/2));
 
    return 0;
}