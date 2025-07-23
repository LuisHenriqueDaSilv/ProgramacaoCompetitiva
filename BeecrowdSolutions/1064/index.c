#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    float sum = 0, input;
    int n = 0;
    for(int i =0; i<6; i++){
        scanf("%f", &input);
        if(input > 0){
            sum += input;
            n++;
        }
    }
    
    printf("%d valores positivos\n", n);
    printf("%.1f\n", (float)sum/n);
 
    return 0;
}