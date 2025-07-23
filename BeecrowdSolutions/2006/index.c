#include <stdio.h>

int main(){

  int correct, count=0, input;
  scanf("%d", &correct);
  for(int i =0; i< 5; i++){
    scanf("%d", &input);
    if(input==correct){
      count++;
    }
  } 

  printf("%d\n", count);
  return 0;

}