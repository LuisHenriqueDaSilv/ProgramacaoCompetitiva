#include <stdio.h>
#include <string.h>

int main(){
  int a, b;
  while(1){
    scanf("%d %d", &a, &b);
    if(a == b && a==0){break;}
    int ans = a+b;
    char ansChar[12];
    sprintf(ansChar, "%d", ans);
    int len = strlen(ansChar);
    for(int i = 0; i<len; i++){
      if(ansChar[i] != '0'){
        printf("%c", ansChar[i]);
      }
    }
    printf("\n");

  }
  return 0;
}