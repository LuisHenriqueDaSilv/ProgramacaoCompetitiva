#include <stdio.h>

int gn(char a){
    return a-48;
}

int main(){
    int n;
    scanf("%d", &n);
    int currValue;
    char input[15];
    while(n--){
        scanf(" %s", input);
        int val = gn(input[2])*10+gn(input[3])+gn(input[5])*100+gn(input[6])*10+gn(input[7])+gn(input[11])*10+gn(input[12]);
        printf("%d\n", val);
    }
}