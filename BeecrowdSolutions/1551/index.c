#include <stdio.h>
#include <string.h>

int main(){

  int n;
  scanf("%d", &n);
  for(int k =0; k<n; k++){
    char frase[1001];
    scanf(" %[^\n]s", frase);
    int alphabet[26];
    memset(alphabet, 0, sizeof(alphabet));
    for(int i =0; i< strlen(frase); i++){
      if(frase[i] >= 65 && frase[i] <=90){
        alphabet[frase[i]-65] = 1;
      } else if(frase[i] >= 97 && frase[i] <=122){
        alphabet[frase[i]-97] = 1;
      }
    }
    int lettersCounter = 0;
    for(int i =0; i<26; i++){
      if(alphabet[i] == 1){
        lettersCounter++;
      }
    }

    if(lettersCounter == 26){
      printf("frase completa\n");
    } else if(lettersCounter>=13){
      printf("frase quase completa\n");
    } else {
      printf("frase mal elaborada\n");
    }
  }
  return 0;
}