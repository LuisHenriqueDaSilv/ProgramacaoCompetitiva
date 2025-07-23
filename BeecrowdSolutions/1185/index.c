#include <stdio.h>

int main() {
    int line;
    char op;
    double matriz[12][12];
    double sum = 0.0;
    int contagem=0;

    scanf("%d", &line); 
    scanf(" %c", &op);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(int i =0; i<12; i++){
        for(int j=0; j<11-i; j++){
            sum += matriz[i][j];
            contagem++;
        }
    }


    if (op == 'S') {
        printf("%.1f\n", sum);
    } else if (op == 'M') {
        printf("%.1f\n", sum / contagem);
    }

    return 0;
}