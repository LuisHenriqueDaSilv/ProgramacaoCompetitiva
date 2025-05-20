#include <stdio.h>

int main(){

    int n, maria, joao, input;
    while(1){
        scanf("%d", &n);
        if(n == 0){ break; }
        maria = 0;
        joao = 0;
        while(n--){
            scanf("%d", &input);
            if(input == 0){maria++;}
            else {joao++;}
        }
        printf("Mary won %d times and John won %d times\n", maria, joao);
    }
}