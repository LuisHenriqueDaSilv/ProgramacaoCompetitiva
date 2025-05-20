#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     float n1, n2, n3, n4;
     scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
     float average = (float)(2*n1+3*n2+4*n3+n4)/10;
     printf("Media: %.1f\n", average);
     if(average < 5.0){
         printf("Aluno reprovado.\n");
     } else if(average < 7){
         printf("Aluno em exame.\n");
         float exam;
         scanf("%f", &exam);
         printf("Nota do exame: %.1f\n", exam);
         float newAverage = (exam+average)/2;
         if(newAverage >= 5){
             printf("Aluno aprovado.\n");
         } else {
             printf("Aluno reprovado.\n");
         }
        printf("Media final: %.1f\n", newAverage);
     } else {
         printf("Aluno aprovado.\n");
     }
 
    return 0;
}