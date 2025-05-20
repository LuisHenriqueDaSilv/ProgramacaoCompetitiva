#include <stdio.h>
#include <string.h>

int main(){
  int n;
  scanf("%d\n", &n);
  char input[110];
  while(n--){ 
    fgets(input, 110, stdin);
    input[strcspn(input, "\n")] = '\0';
    int len = strlen(input);
    while(len>-1){
      if(input[len] >= 97){
        printf("%c", input[len]);
      }
      len--;
    };
    printf("\n");
  }
  return 0;
}