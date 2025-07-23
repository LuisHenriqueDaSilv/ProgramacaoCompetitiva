#include <stdio.h>
#include <string.h>

int main() {
  double n;
  scanf("%lf", &n);
  double lastValue = n*2;
  for(int i =1; i<101; i++){
    printf("N[%d] = %.4lf\n", i-1, (double)lastValue/2);
    lastValue = lastValue/2;
  }
  return 0;
}