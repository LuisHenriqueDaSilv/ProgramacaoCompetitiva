#include <stdio.h>

int main(){

  char op;
  scanf("%c", &op);
  double tab[12][12];
  for(int i =0; i<12; i++){
    for(int j =0; j<12; j++){
      scanf("%lf", &tab[i][j]);
    }
  }

  double sum =0.0;

  int n = 1;
  int m = 10;
  for(int i=11; i>6; i--){
    for(int j =n; j<=m; j++){
      sum+=tab[j][i];
    }
    n++;
    m--;
  }

  if(op == 'S'){
    printf("%.1lf\n", sum);
  } else {
    double ans = sum/30.0;
    printf("%.1lf", ans);

  }

  return 0;
}