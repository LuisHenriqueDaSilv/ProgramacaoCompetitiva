#include <stdio.h>
#include <string.h>

int main(){
  int n = -1;
  int first = 1;
  while(1){
    scanf("%d", &n);
    if(n==0){break;}

    if(first != 1){ printf("\n"); }
    first = 0;

    char names[n][51];
    int mLength = 0;
    for(int i =0; i<n; i++){
      scanf(" %s", names[i]);
      int inputLength = strlen(names[i]);
      if(inputLength > mLength){ mLength = inputLength; }
    }

    for(int i =0; i<n; i++){
      int dif = mLength - strlen(names[i]);
      for(int k =0; k<dif; k++){ printf(" "); }
      printf("%s\n", names[i]);
    }

  }
  return 0;
}