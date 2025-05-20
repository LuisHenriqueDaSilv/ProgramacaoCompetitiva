#include <stdio.h>

int main(){

  int n;
  while(1){
    scanf(" %d", &n);
    if(n == 0){
      break;
    }
    int current = n;
    int big = 0;

    while(current != 1){
      if(current > big){
        big = current;
      }
      if(current%2 == 0){
        current = current/2;
      } else {
        current = (current*3)+1;
      }
      
    }

    if(big == 0){
      big = 1;
    }
    printf("%d\n", big);

  }
  return 0;
}