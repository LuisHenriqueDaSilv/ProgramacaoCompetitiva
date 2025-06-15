#include <stdio.h>

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
            
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int valor = i < j ? i : j;
                    valor = valor < n - i ? valor : n - i - 1;
                    valor = valor < n - j - 1 ? valor : n - j - 1;
                    if(j == 0){
                        printf("%3d", valor + 1);
                    } else {
                        printf("%4d", valor + 1);
                    }
                }
                printf("\n");
            }
        printf("\n");
    }
    return 0;
}
