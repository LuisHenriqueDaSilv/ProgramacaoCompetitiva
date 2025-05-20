#include <stdio.h>

int main() {
    int n, ans = 0, dif;
    scanf("%d", &n);
    int inputs[n];

    for (int i = 0; i < n; i++) {
      scanf("%d", &inputs[i]);
    }

    if (n == 1) {
        printf("1\n");
        return 0;
    }

    dif = inputs[1] - inputs[0];
    ans = 1;

    for (int i = 1; i < n - 1; i++) {
      int current_dif = inputs[i + 1] - inputs[i];
      if (current_dif != dif) {
        ans++;
        dif = current_dif;
      }
    }

    printf("%d\n", ans);

    return 0;
}