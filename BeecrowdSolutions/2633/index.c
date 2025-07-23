#include <stdio.h>

typedef struct carne {
  char name[25];
  int validade;
} carne;

int main(){
  int n;
  while(scanf("%d", &n) != EOF){
    carne carnes[n];
    for(int i = 0; i<n; i++){
      scanf(" %s", carnes[i].name);
      scanf(" %d", &carnes[i].validade);
    }

    for(int i =0; i<n; i++){
      for(int j =i; j<n; j++){
        if(carnes[i].validade > carnes[j].validade){
          carne aux = carnes[i];
          carnes[i] = carnes[j];
          carnes[j] = aux;
        }
      }
    }

    for(int i =0; i<n; i++){
      printf("%s", carnes[i].name);
      if(i!=n-1){
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}