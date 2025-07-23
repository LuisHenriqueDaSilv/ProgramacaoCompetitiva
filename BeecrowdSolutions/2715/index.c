#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
      int values[n];
      long long totalSum = 0, rangelSum = 0, guguSum, minDifference;

      for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
        totalSum += values[i];
      }

      minDifference = totalSum;

      for (int i = 0; i < n; i++) {
        rangelSum += values[i];
        guguSum = totalSum - rangelSum;
        long long difference = rangelSum > guguSum ? rangelSum - guguSum : guguSum - rangelSum;
        if (difference < minDifference) {
            minDifference = difference;
        }
      }

      printf("%lld\n", minDifference);
    }

    return 0;
}