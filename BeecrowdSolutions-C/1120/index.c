#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char def;
  int ansCont=0,length, n, p;
  char input[101],ans[101];

  while(scanf("%c %s\n", &def, input) != EOF){
    if(def == '0' && !strcmp(input, "0")){break;};

    length = strlen(input);
    ansCont = 0;

    for(int i =0; i<length; i++){
      if(input[i] != def){
        ans[ansCont] = input[i];
        ansCont++;
      }
    }
    ans[ansCont] = '\0';
  
    p = 0;
    n = strlen(ans);
    while(p < n){
      if(ans[p] != '0')  break;
      p++;
    }

    if(p == n){
      printf("0\n");
    } else {
      strcpy(ans, ans+p);
      printf("%s\n", ans);
    }
  }
  return 0;
}