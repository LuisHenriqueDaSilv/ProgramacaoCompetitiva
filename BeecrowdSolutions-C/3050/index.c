#include <stdio.h>
#include <math.h>

int MIN__(int a, int b ){
    if(a>b){return b;}else{return a;}
}

int MAX__(int a, int b){
    if(a>b){return a;}else{return b;}
}

int main(){
    int n,ans=0, cur;
    scanf("%d", &n);
    int predios[n];
    for(int i =0; i<n; i++){
        scanf("%d", &predios[i]);
    }

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cur = predios[i]+predios[j]+(MAX__(i, j) - MIN__(i,j));
            if(cur > ans){
                ans = cur;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}