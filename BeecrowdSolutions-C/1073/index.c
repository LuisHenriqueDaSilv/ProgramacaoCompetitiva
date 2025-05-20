#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int n;
     scanf("%d", &n);
     for(int i =1; i<=n; i++){
         if(i%2 == 0){
            printf("%d^2 = %d\n", i, i*i);
         }
         
     }
 
    return 0;
}