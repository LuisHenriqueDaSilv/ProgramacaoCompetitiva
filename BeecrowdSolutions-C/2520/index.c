#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m, input;
  while(scanf("%d %d", &n, &m) != EOF) {
    
    int grid[n][m];
    int xp, yp, xm, ym;
    
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        scanf("%d", &input);
        if(input == 1) {
          xp = i;
          yp = j;
        } 
        if(input == 2) {
          xm = i;
          ym = j;
        }
      }
    }

    printf("%d\n", abs(xp - xm) + abs(yp - ym));
  }

  return 0;
}