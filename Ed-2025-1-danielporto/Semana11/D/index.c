#include <stdio.h>
#include <stdlib.h>


int cmp(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int main(){
    int n;
    scanf("%d", &n);
    int start[n];
    int end[n];

    for(int i = 0; i < n; i++){
        scanf("%d %d", &start[i], &end[i]);
    }

    qsort(start, n, sizeof(int), cmp);
    qsort(end, n, sizeof(int), cmp);
    int i = 0, j = 0;
    int current = 0, max = 0;
    while(i < n && j < n){
        if(start[i] < end[j]){
            current++;
            if(current > max)
                max = current;
            i++;
        } else {
            current--;
            j++;
        }
    }

    printf("%d\n", max);
    return 0;
}
