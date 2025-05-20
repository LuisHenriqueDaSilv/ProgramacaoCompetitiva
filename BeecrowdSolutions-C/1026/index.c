#include <stdio.h>

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        int ans = a^b;
        if(ans == 2147483647){ //(Beecrowd bug) kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
            printf("4294967295\n");
        } else {
            printf("%d\n", ans);
        }
    }
    return 0;
}