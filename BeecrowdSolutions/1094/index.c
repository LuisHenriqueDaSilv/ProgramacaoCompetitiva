#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n, a;
    char animal;
    int sum=0, sumcoe=0, sumrat=0, sumsapo=0;
    scanf("%d", &n);
    
    for(int i = 0; i<n; i++){
        scanf("%d %c", &a, &animal);
        sum+=a;
        switch(animal){
            case 'C':
                sumcoe+=a;
                break;
            case 'R':
                sumrat+=a;
                break;
            case 'S':
                sumsapo+=a;
                break;
        }
    }
    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", sumcoe);
    printf("Total de ratos: %d\n", sumrat);
    printf("Total de sapos: %d\n", sumsapo);
    printf("Percentual de coelhos: %.2f %%\n", (float)sumcoe*100/sum);
    printf("Percentual de ratos: %.2f %%\n", (float)sumrat*100/sum);
    printf("Percentual de sapos: %.2f %%\n", (float)sumsapo*100/sum);
    return 0;
}