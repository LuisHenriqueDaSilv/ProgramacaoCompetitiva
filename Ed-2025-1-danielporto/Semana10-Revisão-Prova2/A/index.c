#include <stdio.h>

int main(){
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int inputs[n];
        int outputs[n];
        for(int i = 0; i<n; i++){
            scanf("%d", &inputs[i]);
        }
        for(int i = 0; i<n; i++){
            scanf("%d", &outputs[i]);
        }

        int isPalindrome = 1;
        for(int i = 0; i<n/2; i++){
            if(inputs[i] != inputs[n-i-1]){
                isPalindrome = 0;
                break;
            }
        }
        if(isPalindrome == 1){
            printf("both\n");
            continue;
        }

        int isInvert = 1;
        for(int i = 0; i<n; i++){
            if(inputs[i] != outputs[n-i-1]){
                isInvert = 0;
                break;
            }
        }

        if(isInvert == 1){
            printf("stack\n");
            continue;
        }

        int isEqual = 1;
        for(int i = 0; i<n; i++){
            if(inputs[i] != outputs[i]){
                isEqual = 0;
                break;
            }
        }

        if(isEqual == 1){
            printf("queue\n");
            continue;
        }

        printf("neither\n");
        
    }
    return 0;
}