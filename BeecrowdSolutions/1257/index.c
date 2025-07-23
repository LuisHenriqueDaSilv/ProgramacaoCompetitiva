#include <stdio.h>
#include <string.h>

int main(){

  int n, d, ans;
  char line[70];
  scanf("%d", &n);
  while(n--){
    ans = 0;
    scanf("%d\n", &d);
    for(int i = 0; i<d; i++){
      fgets(line, 70, stdin);
      line[strcspn(line, "\n")] = '\0';
      int len = strlen(line);
      for(int j = 0; j<len; j++){
        ans += (line[j]-65)+i+j;
      }
    };
    printf("%d\n", ans);
  }
  return 0;
}