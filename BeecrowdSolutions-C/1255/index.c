#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  int alphabet[26];
  char input[220];
  int n;
  scanf("%d", &n);
  getchar();
  int maiorLetra = 0;
  while(n--){
    fgets(input, 220, stdin);
    input[strcspn(input, "\n")] = '\0';
    for(int i = 0; i<26; i++){
      alphabet[i] = 0;
    }
    maiorLetra = 0;
    
    for(int i =0; i<strlen(input); i++){
      if(isalpha(input[i])){
        int idx = tolower(input[i])-'a';
        alphabet[idx]++;
        if(alphabet[idx] > maiorLetra){
          maiorLetra = alphabet[idx];
        }
      }
    }
    
    for(int i =0; i<26; i++){
      if(alphabet[i] == maiorLetra){
        printf("%c", i+97);
      }
    }
    printf("\n");
  }
  return 0;
}