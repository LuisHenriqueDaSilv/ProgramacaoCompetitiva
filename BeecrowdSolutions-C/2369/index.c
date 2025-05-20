#include <stdio.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

int main(){

  /**
   * Escreva a sua solução aqui
   * Code your solution here
   * Escriba su solución aquí
   */

  int n;
  int ans = 7;

  scanf("%d", &n);

  if(n> 10){ans += MIN((n-10), 20);}
  if(n> 30){ans += MIN((n-30)*2, 140);}
  if(n> 100){ans += (n-100)*5;}

  printf("%d\n", ans);

  return 0;
}