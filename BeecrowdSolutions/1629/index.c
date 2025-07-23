#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int soma(int num) {
  int soma = 0;
  while (num > 0) {
    soma += num % 10;
    num /= 10;
  }
  return soma;
}

int main(){


  char input[1000];
  int n;
  while(1){
    scanf("%d", &n);
    if(n == 0){break;}
    getchar();
    for(int k =0; k<n; k++){

      scanf("%s", input);
      int zero = 0;
      int um = 0;
      for(int i =0; i<strlen(input); i++){
        if(i%2 == 0){
          zero+=input[i]-48;
        } else {
          um+=input[i]-48;
        }
      }
      int codZero = soma(zero);
      int codUm = soma(um);

      printf("%d\n", codZero+codUm);

    };
  }

  return 0;
}

