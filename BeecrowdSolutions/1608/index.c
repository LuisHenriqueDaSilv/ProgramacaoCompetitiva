#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  for(int i =0; i<n; i++){
    int ans = 0;
    int din, nIgre, nbolExis;
    scanf("%d %d %d", &din, &nIgre, &nbolExis);
    int ingred[nIgre];
    for(int j = 0; j<nIgre; j++){
      scanf("%d", &ingred[j]);
    }
    int bolos[nbolExis];
    int mSum = 0, curSum =0;
    for(int j = 0; j<nbolExis; j++){
      int qntIgre;
      scanf("%d", &qntIgre);
      int sumBolAt= 0;
      for(int y = 0; y<qntIgre; y++){
        int index, qnt;
        scanf("%d %d", &index, &qnt);
        sumBolAt+= qnt*ingred[index];
      }
      if(sumBolAt < ans || ans == 0){
        ans = sumBolAt;
      }
    }

    printf("%d\n", din/ans );
  }


  return 0;
}