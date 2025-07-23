#include <stdio.h>

int main() {
  int n, ne=0, nr=0;
  double totalsum =0;
  scanf("%d", &n);
  int inputs[n];
  int visited[n];
  for(int i =0; i<n; i++){
    scanf("%d", &inputs[i]);
    totalsum+=inputs[i];
    visited[i] = 0;
  }


  int i =0;
  while(i<n && i>=0){ 
    if(visited[i]==0){
      visited[i]=1;
      ne++;
    }
    int nexti;

    if(inputs[i]%2 == 1){
      nexti = i+1;
    } else {
      nexti= i-1;
    }

    if(inputs[i]>0){
      nr+=1;
      inputs[i]--;
    }
    

    i=nexti;

  }

  printf("%d %.0lf\n", ne, totalsum-nr );

  return 0;
}