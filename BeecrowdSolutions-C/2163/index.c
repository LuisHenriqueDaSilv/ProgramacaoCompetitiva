#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m, input;
  scanf("%d %d", &n, &m);
  int grid[n][m];
  for(int i =0; i<n; i++){
    for( int j = 0; j<m; j++){  
      scanf("%d", &grid[i][j]);
    }
  }

  int x=0,y=0;
  for(int i =1; i<n-1; i++){
    for( int j = 1; j<m-1; j++){  
      if(grid[i][j] == 42){
        if(
          grid[i][j-1] == 7 &&
          grid[i-1][j-1] == 7 &&
          grid[i-1][j] == 7 &&
          grid[i+1][j-1] == 7 &&
          grid[i+1][j] == 7 &&
          grid[i-1][j+1] == 7 &&
          grid[i][j+1] == 7 &&
          grid[i+1][j+1] == 7
          ){
            printf("%d %d\n", i+1, j+1);
            return 0;
          }
      }
    }
  }

  printf("0 0\n");

  return 0;
}