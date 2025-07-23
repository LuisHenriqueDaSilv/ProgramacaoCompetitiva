#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int n;
     scanf("%d", &n);
     int j=1;
     for(int i =0; i<n; i++){
         printf("%d %d %d PUM\n", j, j+1, j+2);
         j+= 4;
     }
 
    return 0;
}