#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n, a, sum;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        sum = 0;
        for(int j =1; j<a; j++){
            if(a%j == 0){
                sum+= j;
            }
        }
        if(sum == a){
            printf("%d eh perfeito\n", a);
        } else {
            printf("%d nao eh perfeito\n", a);
        }
    }
    return 0;
}