#include <stdio.h>

void fibonacci(int a, int b, int count, int target){
  if(count == target){ return; } 
  else if(count !=0) {
    printf(" ");
  }
  printf("%d", a);
  count++;
  fibonacci(b, a+b, count, target);  
};

int main(){

  int n;
  scanf("%d", &n);
  fibonacci(0, 1, 0, n);
  printf("\n");

  return 0;
}