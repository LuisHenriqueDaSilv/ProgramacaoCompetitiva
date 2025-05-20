#include <stdio.h>

int main() {
    int t, n, ans=0, input;
    scanf("%d", &t);
    scanf("%d", &n);

    for(int i =0; i<n; i++){
      scanf("%d", &input);
      if(input*t >= 40000000){
        ans++;
      }
    }

    printf("%d\n", ans);


    return 0;
}