#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int a, b, c;
     scanf("%d %d %d", &a, &b, &c);
     int ma = (a+b+abs(a-b))/2;
     int ans = (ma+c+abs(ma-c))/2;
     
     printf("%d eh o maior\n", ans);
 
    return 0;
}