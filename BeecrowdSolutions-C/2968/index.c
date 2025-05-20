#include <stdio.h>
#include <math.h>

int main(){
    int v, p;
    scanf("%d %d", &v, &p);
    for(int i =1; i<10; i++){
        if(i!=1){
            printf(" ");
        }
        double ans = ceil((v*p)*(double)(i*10)/100);
        printf("%.0lf", ans);
    }
    printf("\n");
    return 0;
}