#include <stdio.h>
#include <string.h>

int main(){
  char input[60];
  while(fgets(input, 60,stdin)){
    input[strcspn(input, "\n")] = '\0';
    int inputLength = strlen(input);
    int lower = 1;
    for(int i = 0; i<inputLength; i++){
      if(input[i] >= 97 && input[i] <= 122){ //minusculo
        if(lower == 1){
          input[i] -=32;
          lower = 0;
        } else {lower = 1; }
      } else if(input[i] >=65 && input[i] <= 90){ // Maisculo
        if(lower == 0){ 
          input[i] += 32;
          lower = 1;
        } else { lower = 0;}
      }
      printf("%c", input[i]);
    }
    printf("\n");
  }
  return 0;

}