#include <stdio.h>

int main(){

  /**
   * Escreva a sua solução aqui
   * Code your solution here
   * Escriba su solución aquí
   */

  int n, nOfSoldiers, jump;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%d %d", &nOfSoldiers, &jump);
    int ans = 0;
    for(int i =2; i<=nOfSoldiers; i++){
      ans = (ans+jump)%i;
    }
    printf("Case %d: %d\n", i+1, ans+1);
  }

  return 0;
}