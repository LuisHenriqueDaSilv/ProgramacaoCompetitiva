#include <stdio.h>
 
int main() {
     
     int n;
     scanf("%d", &n);
     
     int ans = n;
     for(int i =n-1; i>0; i--){
         ans = ans*i;
     }
     
     printf("%d\n", ans);
 
    return 0;
}