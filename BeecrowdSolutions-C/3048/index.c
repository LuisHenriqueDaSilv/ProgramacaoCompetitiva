#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int seq = 0;
  int last, input;
  for(int i = 0;i <n; i++ ){
    scanf("%d", &input);
    if(input!=last){
      seq++;
      last = input;
    }
  }

  printf("%d\n", seq);

  return 0;
}