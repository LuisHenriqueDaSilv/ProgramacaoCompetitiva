#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char input[100];
    int mai, min, num, invalid;

    while(fgets(input, sizeof(input), stdin)){
        input[strcspn(input, "\n")] = '\0';
        mai=0; min=0; num=0, invalid=0;
        int length=strlen(input);
        if( length> 32 || length < 6){
            printf("Senha invalida.\n");
            continue;
        }

        for(int i = 0; i<length; i++){
            char let = input[i];
            if(isupper(let)){
                mai = 1;
            } else if(islower(let)){
                min = 1;
            } else if(isdigit(let)){
                num = 1;
            } else {
                invalid = 1;
            }
                
        }

        if(mai == 0 || min == 0 || num == 0 || invalid == 1){
            printf("Senha invalida.\n");
        } else {
            printf("Senha valida.\n");
        }
    }

}