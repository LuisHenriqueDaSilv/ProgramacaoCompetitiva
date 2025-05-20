#include <stdio.h>
#include <string.h>

int main(){

  int n;
  scanf("%d\n", &n);
  char line[20010];
  char itens[1000][25];

  for(int k =0; k<n; k++){
    memset(itens, '\0', sizeof(itens));
    fgets(line, 20010, stdin);
    line[strcspn(line, "\n")] = '\0';
    
    int lineLength = strlen(line);
    int itensCounter = 0;
    int letterCounter = 0;

    char currentWord[25];
    memset(currentWord, '\0', sizeof(currentWord));
    
    for(int i = 0; i<lineLength; i++){
      if(line[i] == ' ' || i==lineLength-1){
        if(i == lineLength-1){
          currentWord[letterCounter] = line[i];
          letterCounter++;
        }

        int found = 0;
        for(int p = 0; p< itensCounter; p++){
          if(strcmp(currentWord, itens[p]) == 0){
            found = 1;
            break;
          }
        }

        if(found == 0){
          strcpy(itens[itensCounter], currentWord);
          itensCounter++;
        }

        memset(currentWord, '\0', sizeof(currentWord));
        letterCounter = 0;
      } else {
        currentWord[letterCounter] = line[i];
        letterCounter++;
      }
    }
    for(int i = 0; i< itensCounter; i++){
      for(int j = i+1; j< itensCounter; j++){
        if(strcmp(itens[i], itens[j]) > 0){
          char aux[25];
          strcpy(aux, itens[i]);
          strcpy(itens[i], itens[j]);
          strcpy(itens[j], aux);
        } 
      }

    }

    for(int i = 0; i<itensCounter; i++){
      if(i!=0 && i!=itensCounter){printf(" ");}
      printf("%s", itens[i]);
    }

    printf("\n");
  }
  return 0;
}