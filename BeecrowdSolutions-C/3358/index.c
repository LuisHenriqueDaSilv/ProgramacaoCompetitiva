#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isConsonant(char c){
  if(
    c!= 'a' &&
    c!= 'e' &&
    c!= 'i' &&
    c!= 'o' &&
    c!= 'u'
  ) {return 1;}
  else {return 0;}
}

int main(){
  int n;
  scanf("%d", &n);
  char input[50];
  while(n--){
    scanf(" %s", input);
    input[0] = tolower(input[0]);

    int isEasy = 1;
    for(int i = 0; i<strlen(input)-2; i++){
      if(isConsonant(input[i]) && isConsonant(input[i+1]) &&  isConsonant(input[i+2])){
        isEasy = 0;
      }
    };
    input[0] = toupper(input[0]);
    if(isEasy == 0){
      printf("%s nao eh facil\n", input);
    } else {
      printf("%s eh facil\n", input);
    }
  }
  return 0;
}