#include <stdio.h>
#include <string.h>

int main(){
  char input[1010];
  int isOpen, len, valid;
  while(fgets(input, 1010, stdin)){
    input[strcspn(input, "\n")] = '\0';
    len = strlen(input);
    isOpen = 0;
    valid = 1;
    for(int i = 0; i<len; i++){
      if(input[i] == ')' ){
        if(isOpen == 0){
          valid = 0;
          break;
        }
        isOpen--;
      } else if(input[i] == '('){
        isOpen++;
      }
    }

    if((valid==1 && isOpen>0) || valid == 0){
      printf("incorrect\n");
    } else {
      printf("correct\n");
    }


  }
  return 0;
}