#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int last = n;
  for(int i =1; i<=10; i++){
    printf("N[%d] = %d\n",i-1, last);
    last=last*2;
  }

  return 0;
}