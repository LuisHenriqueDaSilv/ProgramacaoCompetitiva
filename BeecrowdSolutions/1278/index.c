#include <stdio.h>
#include <string.h>

int main(){
  int n;
  int first = 1;
  while(1){
    scanf("%d", &n);
    if(n == 0){break;}

    if(first != 1){ printf("\n"); }
    first = 0;

    char inputs[n][51];
    char validInputs[n][51];
    for(int i =0; i<n; i++){
      scanf(" %[^\n]s", inputs[i]);
      int espaco = 1;
      int validCounter = 0;
      for(int k =0; k<strlen(inputs[i]); k++){ // cada caracter do input
        if(inputs[i][k] == ' '){
          if(espaco != 1){
            validInputs[i][validCounter] = inputs[i][k];
            validCounter++;
            espaco = 1;
          }
        } else {
          espaco = 0;
          validInputs[i][validCounter] = inputs[i][k];
          validCounter++;
        }
      }
      if(validInputs[i][validCounter-1] == ' '){
        validCounter--;
      };
      validInputs[i][validCounter] = '\0';
    }
    int m = 0;
    for(int i =0; i<n; i++){
      int length = strlen(validInputs[i]);
      if(length>m){
        m = length;
      }
    }
    for(int i =0; i<n; i++){
      int dif = m - strlen(validInputs[i]);
      for(int k =0; k<dif; k++){ printf(" "); }
      printf("%s\n", validInputs[i]);
    }

  }
  return 0;
}