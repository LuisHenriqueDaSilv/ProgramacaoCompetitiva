#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

  int n;
  char input[1000] = "";
  scanf("%d", &n);

  for(int i =0; i<n; i++){
    scanf(" %1000[^\n]", input);
    long int inputlen = strlen(input);

    for(int j =0; j<inputlen; j++){
      if(isalpha(input[j])){
        input[j] += 3;
      }
    }  

    int k=0, j=inputlen-1;
    while(k<j){
      char aux = input[k];
      input[k] = input[j];
      input[j] = aux;
      k++;
      j--;
    };

    for(int j =(int)(inputlen/2); j<inputlen; j++){
      input[j]-=1;
    }

    printf("%s\n", input);
  }
  return 0;
}