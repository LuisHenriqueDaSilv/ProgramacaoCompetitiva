#include <stdio.h>
 
void printWinner(int pc, int pf){
    if(pc > pf){
        printf("C\n");
    } else {
        printf("F\n");
    }
}
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b ,&c, &d, &e, &f);
    int pc = a*3+b;
    int pf = d*3+e;
    if(pc!=pf){
        printWinner(pc, pf);
    } else if(c !=f){
        printWinner(c, f);
    } else {
        printf("=\n");
    }
    
    return 0;
}