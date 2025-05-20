#include <stdio.h>
#include <string.h>

void strrev(char* string){
  int len = strlen(string);
  for(int i =0; i<len/2; i++){
    int l = len-i-1;
    char aux = string[i];
    string[i] = string[l];
    string[l] = aux;
  }
}

int main(){

  int n;
  scanf("%d", &n);
  for(int i =0; i<n; i++){
    int a,b;
    scanf("%d %d", &a, &b);
    for(int j = a; j<=b; j++){
      printf("%d", j);
    }

    for(int j =b; j>=a; j--){
      char vString[7];
      sprintf(vString, "%d", j);
      strrev(vString);
      printf("%s", vString);
    }
    printf("\n");
  }

  return 0;
}