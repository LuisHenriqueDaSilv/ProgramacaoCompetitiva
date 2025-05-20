#include <stdio.h>

int main(){
  char input[8];
  int currentSum=0, i=0;
  int ans[3];
  while(scanf(" %[^\n]s", input) != EOF){
    if(input[0] == 'c'){
      ans[i] = currentSum;
      i++;
      currentSum = 0;
    } else {
      if(input[0] == '*'){
        currentSum+=4;
      }
      if(input[1] == '*'){
        currentSum+=2;
      }
      if(input[2] == '*'){
        currentSum+=1;
      }
    }
  }
  printf("%d\n", ans[0]);
  printf("%d\n", ans[1]);
  printf("%d\n", ans[2]);
  return 0;
}