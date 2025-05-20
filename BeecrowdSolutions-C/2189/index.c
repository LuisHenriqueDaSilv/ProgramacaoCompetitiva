#include <stdio.h>
#include <string.h>

int main(){

    int n, input, test = 1;
    while(1){
        if(test != 1){
            printf("\n");
        }
        scanf("%d", &n);
        if (n == 0){break;}
        for(int i =0; i<n; i++){
            scanf("%d", &input);
            if(input == i+1){
                printf("Teste %d\n", test);
                printf("%d\n", i+1);
                
            };
        }
        test++;
    }

}