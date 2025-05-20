#include <stdio.h>
#include <string.h>

int main(){

    int n, m, xRation, yRation, a, b, first= 1;
    while(1){

        scanf("%d %d\n", &n, &m);
        if(n==0 && m ==0){break;}

        char inputs[n][m+10];
        for(int i = 0; i<n; i++){
            fgets(inputs[i], n+10, stdin);
            inputs[i][strcspn(inputs[i],"\n")] = '\0';
        }
        scanf("%d %d", &a, &b);

        xRation = a/n;
        yRation = b/m;

        for(int i = 0; i<n; i++){ // Cada linha
            for(int p = 0; p<xRation; p++){
                for(int j = 0; j<m; j++){ // Cada char
                    for(int k = 0; k<yRation; k++){
                        printf("%c", inputs[i][j]);
                    }
                }
                printf("\n");
            }
        }
        printf("\n");


    }
    return 0;
}