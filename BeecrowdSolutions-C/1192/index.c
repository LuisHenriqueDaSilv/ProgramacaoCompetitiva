#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  scanf("%d", &n);
  char input[4];
  for(int i =0; i<n; i++){
    scanf(" %s", input);
    int val1 = atoi(&input[0]);
    int val2 = atoi(&input[2]);
    if(input[0] == input[2]){
      printf("%d\n", val1*val2);
    } else if(input[1] >=65 && input[1] <=90){
      printf("%d\n", val2-val1);        
    } else {
      printf("%d\n", val2+val1);        
    }
  }
  return 0;
}