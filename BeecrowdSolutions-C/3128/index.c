#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a<6 || b<6){
      printf("NO\n");
    } else  if((a>=18 || b>=18)){
      printf("YES\n");
    } else if(a>=14 && b>=14){
      printf("YES\n");

    } else {
      printf("NO\n");
    }
 
    return 0;
}