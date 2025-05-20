#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  char input[5010];
  int len;
  while(fgets(input, 5010, stdin)){
    input[strcspn(input, "\n")] = '\0';
    len=strlen(input);

    int ans = 0;
    char cur = '\0';
    int count = 0;
    for(int i = 0; i<len; i++){
      if((input[i] == ' ' || i==0) && i!=len-1){ // Inicio de uma palavra
        int idx = i+1;
        if(i == 0){
          idx = 0;
        }
        if(tolower(input[idx]) != cur){ // Se for diferente
          cur = tolower(input[idx]);
          count = 1;
        } else {
          if(count == 1){
            ans++;
            count = 0;
          }
        }
      }
    }

    printf("%d\n", ans);
  }
}