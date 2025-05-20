#include <stdio.h>
#include <string.h>

int main(){
  char input[60];
  memset(input, '\0', sizeof(input));
  char aux;
  int inCounter = 0;
  while(scanf("%c", &aux) != EOF){
    if(aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u'){
      input[inCounter] = aux;
      inCounter++;
    } 
  }

  int isPalindrome = 1;
  int len = strlen(input);
  for(int i = 0; i<len; i++){
    if(input[i] != input[len-1-i]){
      isPalindrome = 0;
      break;
    }
  }

  if(isPalindrome == 1){
    printf("S\n");
  } else {
    printf("N\n");
  }
  return 0;
}