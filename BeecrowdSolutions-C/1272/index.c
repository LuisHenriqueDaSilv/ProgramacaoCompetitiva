#include <stdio.h>
#include <string.h>

int main(){
  int n;
  char input[51];
  scanf("%d\n", &n);

  for(int i =0; i<n; i++){
    gets(input);

    int len = strlen(input);
    if(len > 0 && input[len-1] == '\n'){
      input[len-1] = '\0';
    };
    char ans[51];
    memset(ans, '\0', sizeof(ans));
    int inSpaces = 1, ansCounter =0;

    for(int k =0; k<strlen(input); k++){
      if(input[k] != ' ' && inSpaces == 1){
        inSpaces = 0;
        ans[ansCounter++] = input[k];
      } else if(input[k] == ' ' && inSpaces == 0){
        inSpaces = 1;
      }
    }
    printf("%s\n", ans);

  }
  return 0;
}
