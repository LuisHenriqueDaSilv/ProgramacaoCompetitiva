#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
 
     
     int n1, n2, n3;
     scanf("%d %d %d", &n1, &n2, &n3);
     int a=n1, b=n2, c=n3;
    if(n1< n2){
        swap(&n1, &n2);
    }
    
    if(n2 < n3){
        swap(&n2, &n3);
    }
    
    if(n1< n2){
        swap(&n1, &n2);
    }
    printf("%d\n%d\n%d\n\n", n3, n2, n1);
    printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}