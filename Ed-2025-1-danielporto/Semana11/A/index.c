#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(){
    int n;
    scanf("%d", &n);
    int inputs[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &inputs[i]);
    }

    qsort(inputs, n,sizeof(int), cmp);
    
    int cnt = 1;
    for(int i = 0; i<n; i++){
        if(inputs[i]!=inputs[i-1]){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    

}