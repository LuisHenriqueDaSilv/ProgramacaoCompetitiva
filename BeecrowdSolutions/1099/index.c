#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    int n, a,b, sum = 0;
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        sum = 0;
        scanf("%d %d", &a, &b);
        
        for(int j = (a>b) ? b+1:a+1; j< ((a>b)? a:b); j++){
            if(j%2 != 0){
                sum+=j;
            }
        }
        printf("%d\n", sum);
    }
 
    return 0;
}  