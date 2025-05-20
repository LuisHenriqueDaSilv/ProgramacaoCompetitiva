#include <stdio.h>
#include <math.h>

double calcular_precisao(int QT, double valores[]) {
    double soma = 0.0, media, somatorio = 0.0;
    for (int i = 0; i < QT; i++) {
        soma += valores[i];
    }
    media = soma / QT;
    for (int i = 0; i < QT; i++) {
        somatorio += pow(valores[i] - media, 2);
    }
    return sqrt(somatorio / (QT - 1));
}

int main() {
        double H, M;
        int QT;
        while(scanf("%lf %lf", &H, &M) != EOF){
          QT = (int)(H * (60.0 / M));
          double valores[QT];
          for (int i = 0; i < QT; i++) {
            scanf("%lf", &valores[i]);
          }
          double precisao = calcular_precisao(QT, valores);
          printf("%.5lf\n", precisao);
        }
    return 0;
}