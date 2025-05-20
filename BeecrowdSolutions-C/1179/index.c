#include <stdio.h>
#include <string.h>

int main() {
  int pares[5], impares[5];
  int indexi=0, indexp =0, lastinput;

  for(int i =0; i<15; i++){

    scanf("%d", &lastinput);
    if(lastinput%2 == 0){
      pares[indexp] = lastinput;
      indexp++;
    } else {
      impares[indexi] = lastinput;
      indexi++;
    }

    if(indexi == 5){
      for(int j =0; j<5; j++){
        printf("impar[%d] = %d\n", j, impares[j]);
      }
      indexi = 0;
    }

    if(indexp == 5){
      for(int j =0; j<5; j++){
        printf("par[%d] = %d\n", j, pares[j]);
      }
      indexp = 0;
    }
  }

  for(int j =0; j<indexi; j++){
    printf("impar[%d] = %d\n", j, impares[j]);
  }

  for(int j =0; j<indexp; j++){
    printf("par[%d] = %d\n", j, pares[j]);
  }

  return 0;
}