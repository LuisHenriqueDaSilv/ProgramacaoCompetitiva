#include <stdio.h>

int main(){

    char peoples[4][10] = {"Rolien", "Naej", "Elehcim", "Odranoel"};
    int n, k, input;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &k);
        while(k--){
            scanf("%d", &input);
            printf("%s\n",peoples[input-1]);
        }
    }
    return 0;
}