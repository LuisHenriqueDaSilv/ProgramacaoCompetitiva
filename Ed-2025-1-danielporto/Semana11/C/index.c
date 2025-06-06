#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int main(){
    int n, m;
    scanf("%d %d", &n,  &m);
    int inputs[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &inputs[i]);
    }

    qsort(inputs, n, sizeof(int), cmp);
    int ans = 0;
    int left = 0, right = n-1;
    while(left <= right){
        if(inputs[left] + inputs[right] <= m){
            left++;
            right--;
        } else {
            right--;
        }
        ans++;
    } 
    printf("%d\n", ans);
}