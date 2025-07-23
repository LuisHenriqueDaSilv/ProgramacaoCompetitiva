#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct n {
  int counter;
  char cha;
  int found;
} n;

int main(){

  n alphabet[100];
  char input[1010];
  int isFirst = 1;
  while(fgets(input, 1010, stdin)){

    if(isFirst == 1){
      isFirst = 0;
    } else {
      printf("\n");
    }

    for(int i = 0; i<98; i++){
      alphabet[i].found = 0;
      alphabet[i].counter = 0;
      alphabet[i].cha = 0;
    }
    input[strcspn(input, "\n")] = '\0';
    int inputLen = strlen(input);

    for(int i =0; i< inputLen; i++){
      if(alphabet[input[i] - 32].found == 0){
        alphabet[input[i] - 32].counter = 1;
        alphabet[input[i] - 32].found = 1;
          alphabet[input[i] - 32].cha = input[i];
        for(int k =i+1; k<inputLen; k++){
          if(input[k] == input[i]){
            alphabet[input[i] - 32].counter++;
          }
        }
      }
    }

    for(int i = 0; i<98; i++){
      for(int j = i; j<98; j++){
        if(alphabet[i].counter >= alphabet[j].counter){
          n aux = alphabet[i];
          alphabet[i] = alphabet[j];
          alphabet[j] = aux;
          
        }
      }
    }

    for(int i = 0; i<98; i++){
      if(alphabet[i].found == 1){
        printf("%d %d\n", alphabet[i].cha, alphabet[i].counter);
      }
    }

  }
  return 0;
}