#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int a,b,c;
     scanf("%d %d %d", &a, &b, &c);
     
     if(a+b-c==0 || a+c-b==0 || b+c-a==0 || a-b==0 || a-c==0 || c-b==0){
         printf("S\n");
     } else {
         printf("N\n");
     }
 
    return 0;
}