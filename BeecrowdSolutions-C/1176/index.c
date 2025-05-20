#include <stdio.h>
#include <string.h>

int main() {
  int t, n;
  scanf("%d", &t);
  
  unsigned long long fib[61];
  fib[0] = 0;
  fib[1] = 1;
  for(int j =2; j<61; j++){
    fib[j] = fib[j-2] + fib[j-1];
  }

  for(int i =0; i<t; i++){
    scanf("%d", &n);
    printf("Fib(%d) = %llu\n", n, fib[n]);
  }


  return 0;
}