#include <stdio.h>

int main(){
  int n, ac=0, acsum=1, bsum=0, lastinput;
  scanf("%d", &n);

  for(int i =0; i<n;i++){
    scanf("%d", &lastinput);
    if(lastinput!=ac){
      ac=lastinput;
      if(acsum > bsum){
        bsum = acsum;
      }
      acsum = 1;
    } else {
      acsum++;
    }
  }

  if(acsum > bsum){
    bsum = acsum;
  }

  printf("%d\n", bsum);

  return 0;
}