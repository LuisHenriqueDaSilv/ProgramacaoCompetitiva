#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int max = 0, input, position;
     for(int i =1; i<= 100; i++){
        scanf("%d", &input);
        if(input > max){
            position = i;
            max = input;
        }
     }
     
     printf("%d\n", max);
     printf("%d\n", position);
 
    return 0;
}