#include <stdio.h>

int main(){
  int a, b;
  scanf("%d %d", &a,&b);
  int camp[a][b];
  int mlin = 0, mcol = 0;
  for(int i =0; i<a; i++){
    int suml = 0;
    for( int j = 0; j<b; j++){
      scanf("%d", &camp[i][j]);
      suml+=camp[i][j];
    }
    if(mlin<suml){ mlin=suml; }
  }

  for(int i =0; i<b; i++){
    int sumC = 0;
    for(int j =0; j<a; j++){ sumC+=camp[j][i]; }
    if(sumC > mcol){ mcol = sumC; }

  }

  printf("%d\n", (mlin > mcol)?mlin:mcol);

  return 0;
}