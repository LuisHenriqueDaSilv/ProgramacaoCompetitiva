#include <stdio.h>

int main(){

  int n, c,m, input;
  scanf("%d %d %d", &n, &c, &m);
  int ans = c;
  int marcadas[c];
  int total[m];

  for(int i =0; i<c; i++){
    scanf("%d", &marcadas[i]);
  }
  for(int i =0; i<m; i++){
    scanf("%d", &total[i]);
  }
  
  for(int i =0; i<c; i++){
    for(int j=0; j<m; j++){
      if(marcadas[i] == total[j]){
        ans--;
        marcadas[i] = -1;
      }
    }
  }

  printf("%d\n", ans);
  return 0;

}