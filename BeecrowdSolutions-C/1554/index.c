#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int MAX__(int a, int b){
  if(a > b){
    return a;
  } else {
    return b;
  }
}

int MIN__(int a, int b){
  if(a < b){
    return a;
  } else {
    return b;
  }
}

int main(){
  int c;
  scanf("%d", &c);

  for(int i =0; i<c; i++){
    int n;
    int xb, yb;
    int mdist, mindex;
    int xact, yact;

    scanf("%d", &n);
    scanf("%d %d", &xb, &yb);
    for(int j = 0; j<n; j++){
      scanf("%d %d", &xact, &yact);
      double dist = sqrt(
        pow(abs(MIN__(xb, xact)-MAX__(xb, xact)), 2) + 
        pow(abs(MIN__(yb, yact)-MAX__(yb, yact)), 2 )
      );

      if(dist < mdist ||j==0){
        mdist = dist;
        mindex = j+1;
      }
    }

    printf("%d\n", mindex);

  }  
  return 0;
}