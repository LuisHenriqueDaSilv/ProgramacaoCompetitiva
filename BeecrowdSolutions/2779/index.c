#include <stdio.h>

int main() {

  int n, m, ans =0, input;

  scanf("%d", &n);
  scanf("%d", &m);
  int encontradas[n + 1];
  for (int i = 1; i <= n; i++) {
    encontradas[i] = 0;
  }
  for (int i = 0; i < m; i++) {
    scanf("%d", &input);
    encontradas[input] = 1;
  }
  for (int i = 1; i <= n; i++) {
    if(!encontradas[i]){
      ans++;
    }
  }
  
  printf("%d\n", ans);

  return 0;
}