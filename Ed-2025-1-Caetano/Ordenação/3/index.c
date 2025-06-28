#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char sobrenome[50];
    int altura;
    int peso;
} Pretendente;

int comparar(const void *a, const void *b) {
    const Pretendente *pa = (const Pretendente *)a;
    const Pretendente *pb = (const Pretendente *)b;

    int diff_a = abs(pa->altura - 180);
    int diff_b = abs(pb->altura - 180);
    if (diff_a != diff_b) return diff_a - diff_b;

    int peso_a = (pa->peso <= 75) ? abs(pa->peso - 75) : 1000;
    int peso_b = (pb->peso <= 75) ? abs(pb->peso - 75) : 1000;
    
    if (peso_a != peso_b) return peso_a - peso_b;

    if (pa->peso != pb->peso) return pa->peso - pb->peso;

    int cmp_sobrenome = strcmp(pa->sobrenome, pb->sobrenome);
    if (cmp_sobrenome != 0) return cmp_sobrenome;

    return strcmp(pa->nome, pb->nome);
}
int main(){
    int n;
    scanf("%d\n", &n);

    Pretendente pretendentes[n];
    for(int i = 0; i< n; i++){
        scanf("%s %s %d %d\n", pretendentes[i].nome, pretendentes[i].sobrenome, &pretendentes[i].altura, &pretendentes[i].peso);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (comparar(&pretendentes[i], &pretendentes[j]) > 0) {
                Pretendente temp = pretendentes[i];
                pretendentes[i] = pretendentes[j];
                pretendentes[j] = temp;
            }
        }
    }

    for(int i = 0; i< n; i++){
        printf("%s, %s\n", pretendentes[i].sobrenome, pretendentes[i].nome);
    }
    
}