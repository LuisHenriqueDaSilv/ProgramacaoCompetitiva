#include <stdio.h>

long double frac(int n){
  if(n == 0){
    return 0;
  }
  return (1.0/(6.0+frac(n-1)));
}

int main(){

  int n;
  long double ans = 0.0;
  scanf("%d", &n);
  printf("%.10Lf\n", 3+frac(n)); 
  return 0;
}