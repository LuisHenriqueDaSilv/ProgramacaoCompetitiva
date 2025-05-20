#include <stdio.h>

int main(){
  int t, n, ans, found;
  scanf("%d",&t);
  for(int i =0; i<t; i++){
    scanf("%d", &n);
    int inputs[n];
    ans = 0;

    for(int i =0; i<n; i++){
      scanf("%d", &inputs[i]);
      found= 0;
      for(int k = 0; k<i; k++){
        if(inputs[k] == inputs[i]){found = 1;}
      }
      if(found == 0){ans++;}
    }
    printf("%d\n", ans);
  }
  return 0;
}