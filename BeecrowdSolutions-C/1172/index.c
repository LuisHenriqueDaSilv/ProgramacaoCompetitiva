#include <stdio.h>

int main() {
  int input;
  for(int i =0; i<10; i++){
    scanf("%d", &input);
    printf("X[%d] = %d\n", i, input <=0?1:input);

  }

  return 0;
}