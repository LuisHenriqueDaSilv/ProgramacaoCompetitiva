#include <stdio.h>
#include <math.h>

long int recursion(int n){
  if(n == -1){
    return 0;
  }

  return pow(2, n)+recursion(n-1);
}

int main(){
  int n, input;
  scanf("%d", &n);
  while(n--){
    scanf("%d", &input);
    printf("%ld\n", recursion(input-1));
  }
  return 0;
}