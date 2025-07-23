#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int dist = 0, temp, med;
  for(int i = 0;i <n; i++ ){
    scanf("%d %d", &temp, &med);
    dist+=temp*med;

  }

  printf("%d\n", dist);

  return 0;
}