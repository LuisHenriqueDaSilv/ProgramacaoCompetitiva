#include <stdio.h>

int mdc(int a, int b) {
  if(b==0){
    return a;
  }
  int temp = b;
  b = a % b;
  a = temp;
  return mdc(a, b);
}

int main(){

  int n, a,b;
  scanf("%d", &n);
  while(n--){
    scanf(" %d %d", &a, &b);
    printf("%d\n", mdc(a, b));
  }
  return 0;
}