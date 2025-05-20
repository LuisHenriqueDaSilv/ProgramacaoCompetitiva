#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    int a=1,b=1,c=1,d=1;
    while(1){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a==0 && b==0 && c==0 &&d==0){
            break;
        }
        
        if(a==c && b==d){
            printf("%d\n", 0);
        } else if (a==c || b==d || (abs(a - c) == abs(b - d))){
            printf("%d\n", 1);
        } else {
            printf("%d\n", 2);
        }
    } 
 
    return 0;
}