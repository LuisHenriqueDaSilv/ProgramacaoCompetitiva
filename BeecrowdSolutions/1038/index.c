#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int id, qnt;
     scanf("%d %d", &id, &qnt);
     float price; 
     switch(id){
         case 1: 
            price = 4;
            break;
         case 2: 
            price = 4.5;
            break;
         case 3: 
            price = 5;
            break;
         case 4: 
            price = 2;
            break;
         case 5: 
            price = 1.5;
            break;
     }
     
     printf("Total: R$ %.2f\n", price*qnt);
 
    return 0;
}