#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int sum1=0, sum2=0, sum3=0, code;
     int askAgain = 1;
     while(askAgain){
        scanf("%d", &code);
        switch(code){
            case 4:
                askAgain = 0;
                break;
            case 3:
                sum3++;
                break;
            case 2:
                sum2++;
                break;
            case 1:
                sum1++;
                break;
        }
     }
     printf("MUITO OBRIGADO\n");
     printf("Alcool: %d\n", sum1);
     printf("Gasolina: %d\n", sum2);
     printf("Diesel: %d\n", sum3);
 
    return 0;
}