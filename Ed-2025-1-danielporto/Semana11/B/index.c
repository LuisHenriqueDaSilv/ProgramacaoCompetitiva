#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);  
    int lookingForSizes[n];
    int aptsSize[m];
    for(int i = 0; i<n; i++){
        scanf("%d", &lookingForSizes[i]);
    }
    for(int i = 0; i<m; i++){
        scanf("%d", &aptsSize[i]);
    }

    qsort(lookingForSizes, n, sizeof(int), cmp);
    qsort(aptsSize, m, sizeof(int), cmp);


    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m){
        if(aptsSize[j] < lookingForSizes[i] - k){
            j++;
        } else if(aptsSize[j] > lookingForSizes[i] + k){
            i++;
        } else {
            cnt++;
            i++;
            j++;
        }
    }

    printf("%d\n", cnt);

}
