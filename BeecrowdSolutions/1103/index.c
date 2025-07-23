#include <stdio.h>

int main(){
    int h1, m1, h2, m2, ans, curMin, wakeMin;
    while(1){
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0){
            break;
        }
        curMin = h1*60+m1;
        wakeMin = h2*60+m2;
        
        if(curMin > wakeMin){
            ans = 1440-curMin+wakeMin;
        } else {
            ans = wakeMin - curMin;
        }
        printf("%d\n", ans);
    };
    return 0;
}