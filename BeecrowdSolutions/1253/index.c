#include <stdio.h>
#include <string.h>

int main(){

  int n, p;
  scanf("%d", &n);
  char input[60];
  while(n--){
    scanf(" %[^\n]s", input);
    scanf(" %d", &p);
    for(int i = 0; i< strlen(input); i++){
      char val = input[i]-p;
      while(val<65){ val+=26; }
      printf("%c", val);
    }
    printf("\n");
  }
  return 0;
}