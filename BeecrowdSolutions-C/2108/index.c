#include <stdio.h>
#include <string.h>

int main(){
  char maiorPalavra[101], input[101];
  int maiorLength=0, length=0, seqLength, inicioPalavra=0;


  while(1){
    scanf(" %[^\n]s", input);
    if(strcmp(input, "0") == 0){break;}
    seqLength = strlen(input);
    inicioPalavra = 0;
    for(int i =0; i<seqLength; i++){ // Cada char
      if(input[i] == ' ' || i+1 == seqLength){// Fim da palavra
        if(i+1 == seqLength){length++;} 

        if(length >= maiorLength){
          maiorLength = length;
          strncpy(maiorPalavra, input + inicioPalavra, length);
          maiorPalavra[length] = '\0';
        }
        printf("%d", length);
        if(i+1 != seqLength){printf("-");}
        length = 0;
        inicioPalavra = i+1;
      } else { // Ainda tá na palavra
        length++;
      }
    }
      printf("\n");
  }

  printf("\nThe biggest word: %s\n", maiorPalavra);
  return 0;
}