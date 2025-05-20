#include <stdio.h>
#include <string.h>


  int findUniqueIndex(int arr[], int size, int* common) {
      if (arr[0] == arr[1]) {
          *common = arr[0];
      } else if (arr[0] == arr[2]) {
          *common=arr[1]; 
          return 1; 
      } else {
          *common=arr[0]; 
          return 0;
      }

      for (int i = 0; i < size; i++) {
          if (arr[i] != *common) {
              return i;
          }
      }
      return -1;
  }

int main(){
  int n, nalunos;
  scanf("%d", &n);
  for(int i =0;i<n; i++){
    scanf("%d", &nalunos);
    int alunos[nalunos];
    int indexAlun[nalunos];
    for(int k=0; k<nalunos; k++){
      scanf("%d", &alunos[k]);
      indexAlun[k] = k;
    }

    for(int j = 0; j<nalunos; j++){
      for(int p = j; p<nalunos; p++){
        if(alunos[p] > alunos[j]){
          int aux = alunos[p];
          alunos[p] = alunos[j];
          alunos[j] = aux;

          aux = indexAlun[p];
          indexAlun[p] = indexAlun[j];
          indexAlun[j] = aux;
          }
      }
    }
    int sumn = 0;
    for(int k=0; k<nalunos; k++){
      if(indexAlun[k] == k){
        sumn++;
      }
    }

    printf("%d\n", sumn);

  }
}