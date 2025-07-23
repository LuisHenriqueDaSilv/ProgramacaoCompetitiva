#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int n, m, min, max, sum;
     int stop = 0;
     while(!stop){
         scanf("%d %d", &n, &m);
         min = (n>m)? m:n;
         max = (m>n)? m:n;
         if(min<=0){
             stop =1;
             continue;
         }
         
         sum = 0;
         for(int i =min; i<=max; i++){
             printf("%d ", i);
             sum+=i;
         }
         printf("Sum=%d\n", sum);
     }
 
    return 0;
}