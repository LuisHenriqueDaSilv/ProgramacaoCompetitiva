#include <stdio.h>
#include <string.h> 

int main(){
  int n1, n2;
  scanf("%d", &n1); 
  char inputs[n1][101];
  for(int i =0; i<n1; i++){
    scanf("%s", inputs[i]);
  }

  scanf("%d", &n2);
  for(int i=0; i<n2; i++){
    char input[100];
    scanf("%s", input);  
    int length = (int)strlen(input);
    int counter =0, bigg = 0;

    for(int j = 0; j<n1; j++){ // Cada palavra das inputs
      int isDifer = 0;
      int wordLength = strlen(inputs[j]);
      for(int k =0; k<length-1; k++){ // Cada letra
        if(input[k] != inputs[j][k]){ // Encontrou diferenca na palavra
          isDifer = 1;
          break;
        }
      }

      if(isDifer == 0){
        counter++;
        if(bigg < wordLength){
          bigg = wordLength;
        }
      }
    }
    if(counter == 0){
      printf("-1\n");
    } else {
      printf("%d %d\n", counter, bigg);
    }
  }

}