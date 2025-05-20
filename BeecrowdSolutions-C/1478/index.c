#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    while (scanf("%d", &N) && N != 0) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int valor = abs(i - j) + 1;
                printf("%3d", valor);
                if (j < N - 1) {
                    printf(" ");
                }
            }
            printf("\n"); 
        }
        printf("\n");
    }

    return 0;
}