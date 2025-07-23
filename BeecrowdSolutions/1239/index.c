#include <stdio.h>
#include <string.h>

int main(){
  char input[55];
  int italic,bold;
  while(fgets(input, 55, stdin)){
    int inputlength = strlen(input);
    if (inputlength > 0 && input[inputlength - 1] == '\n') {
      input[inputlength - 1] = '\0';
      inputlength--;
    }

    italic = 0;
    bold = 0;
    for(int i =0; i<inputlength; i++){
      if(input[i] == '_'){
        if(italic == 0){
          italic = 1;
          printf("<i>");
        } else {
          italic = 0;
          printf("</i>");
        }
      } else if (input[i] == '*'){
        if(bold == 0){
          bold = 1;
          printf("<b>");
        } else {
          bold = 0;
          printf("</b>");
        }
      } else {
        printf("%c", input[i]);
      }
    }
    printf("\n");
  }
  return 0;
}