#include <stdio.h>
#include <string.h>

int main(){
  int n, inputLength, ans, opera;
  char input[51];

  while(scanf(" %s", input) != EOF){
    scanf("%d", &n);
    inputLength = strlen(input);
    ans = 0;
    opera = 0;
    for (int i = 0; i < inputLength; i++){
      if(input[i] == 'W'){
        if(opera > 0){
          ans+= 2;
        } else {
          ans++;
        }
        opera=0;
      } else if(opera == n){
        ans++;
        opera = 1;
      } else {opera++;};
    }

    if(opera > 0){ans++;}

    printf("%d\n", ans);
  }
  
  return 0;
}