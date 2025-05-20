#include <stdio.h>
#include <string.h>

int main() {
    int n, m, input;

    while (1) {
      scanf("%d %d", &n, &m);
      if (n == 0 && m == 0) break;

      int encontrados[n + 1];
      for(int i =1; i<n+1; i++){
        encontrados[i] = 0;
      }
      int ans = 0;

      for (int i = 0; i < m; i++) {
        scanf("%d", &input);
        if (encontrados[input] == 1) {
          ans++;
        }
        encontrados[input]++;
      }

      printf("%d\n", ans);
    }

    return 0;
}