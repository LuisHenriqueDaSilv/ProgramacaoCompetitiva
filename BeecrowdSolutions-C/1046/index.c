#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int init, end;
     scanf("%d %d", &init, &end);
     int duration;
     if(init < end){
         duration = end - init;
     } else {
         duration = 24-init + end;
     }
     printf("O JOGO DUROU %d HORA(S)\n", duration);
 
    return 0;
}