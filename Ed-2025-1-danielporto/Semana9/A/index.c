#include <stdio.h>

char recursion(int matches[15][2], int n) {
    if (n <= 8) {
        return matches[n-1][0] > matches[n-1][1] ? 
        'A' + (n-1)*2 : 'A' + (n-1)*2 + 1;
    }
    char t1, t2;
    
    if (n <= 12) {
        t1 = recursion(matches, (n-9)*2 + 1);
        t2 = recursion(matches, (n-9)*2 + 2);
    } else if (n <= 14) {
        t1 = recursion(matches, (n-13)*2 + 9);
        t2 = recursion(matches, (n-13)*2 + 10);
    } else { 
        t1 = recursion(matches, 13);
        t2 = recursion(matches, 14);
    }
    
    int idx = n - 1;
    return matches[idx][0] > matches[idx][1] ? t1 : t2;
}

int main() {
    int matches[15][2];
    
    for (int i = 0; i < 15; i++) {
        scanf("%d %d", &matches[i][0], &matches[i][1]);
    }
    
    char ans = recursion(matches, 15);
    
    printf("%c\n", ans);
    return 0;
}