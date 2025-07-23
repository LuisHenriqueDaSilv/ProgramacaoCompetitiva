#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int n, l, c, ans=0;
    scanf("%d", &n);

    for(int i =0; i<n; i++){
      scanf("%d %d", &l, &c);
      if(l>c){
        ans+=c;
      }
    }

    printf("%d\n", ans);
 
    return 0;
}