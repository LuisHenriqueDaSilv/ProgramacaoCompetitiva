#include <stdio.h>
using namespace std;

int main(){
    int c1, c2, p1, p2;
    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    int prod1 = c1*p1;
    int prod2 = c2*p2;
    if(prod1 > prod2){
        printf("-1\n" );
    } else if(prod2 > prod1){
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}