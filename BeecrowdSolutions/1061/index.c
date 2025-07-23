#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int d1, d2, hi, mi, si, ht, mt, st;
     scanf(" Dia %d", &d1);
     scanf("%d : %d : %d", &hi, &mi, &si);
     scanf(" Dia %d", &d2);
     scanf("%d : %d : %d", &ht, &mt, &st);
     long a = (long)(d2*86400+ht*3600+mt*60+st) - (long)(d1*86400+hi*3600+mi*60+si);
     int days = a/86400;
     int restOfTheDay = a%86400;
     int hours = restOfTheDay/3600;
     int restOfTheHours = restOfTheDay%3600;
     int minutes = restOfTheHours/60;
     int seconds = restOfTheHours%60;
     
    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);
    return 0;
}