#include <stdio.h>

int main(){
  int input;
  scanf("%d", &input);
  if(input >= 86){
    printf("A\n");
  } else if(input >=61){
    printf("B\n");
  } else if(input >= 36){
    printf("C\n");
  } else if(input >=1){
    printf("D\n");
  } else {
    printf("E\n");
  }

  return 0;
}