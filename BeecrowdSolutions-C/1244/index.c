#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  char string[50];
  int len; 
} word;

int compare(const void *a, const void *b){
  return strlen(*(char **)b) - strlen(*(char **)a);
}


int main(){

  int n;
  char input[25000];
  scanf("%d\n ", &n);
  while(n--){
    int nOfWords = 0;
    fgets(input, 25000, stdin);
    input[strcspn(input, "\n")] = '\0';
    int inputLen = strlen(input);
    char *words[25000];
    int wordCount = 0;
    char *pnt = strtok(input, " ");
    while(pnt != NULL){
      words[wordCount] = pnt;
      pnt = strtok(NULL, " ");
      wordCount++;
    }

    qsort(words, wordCount, sizeof(char *), compare);

    for (int i = 0; i < wordCount; i++) {
        if (i != 0) {
            printf(" ");
        }
        printf("%s", words[i]);
    }
    printf("\n");
  }
  return 0;

}