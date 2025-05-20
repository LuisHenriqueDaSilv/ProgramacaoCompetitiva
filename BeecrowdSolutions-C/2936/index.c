#include <stdio.h>

int main(){
    int ans = 225, input;
    int values[] = {  300, 1500, 600, 1000, 150};
    for(int i = 0; i<5; i++){
        scanf("%d", &input);
        ans += input*values[i];
    }
    printf("%d\n", ans);

}