#include <stdio.h>

int main(){
  int leds[] = {6,2,5,5,4,5,6,3,7,6};
  int n;
  char input;
  long int ans;
  scanf("%d\n", &n);
  while(n--){
    ans = 0;
    while(1){
      if(scanf("%c", &input) == EOF || input == '\n'){
        printf("%ld leds\n", ans);
        break;
      };
      ans+=leds[input-48];
    }
  }
  return 0;
}