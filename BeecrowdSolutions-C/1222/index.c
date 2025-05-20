#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
  int n, l, c;
  char word[200];

  while(scanf("%d %d %d", &n, &l, &c) != EOF){
    int lc=1, cc=0;
    for(int i =0; i<n; i++){
      scanf("%s", word);
      int wordLength = strlen(word);

      if(cc+wordLength>c){
        lc++;
        cc = wordLength+1;
      } else {
        cc+=wordLength+1;
      }
    }

    printf("%d\n", (int)ceil((double)lc/ l));
  }

  return 0;
}