#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>


int main(){
    char line[60];
    char newLine[60];
    int newLineCounter = 0;
    while(fgets(line, 60, stdin)){
        line[strcspn(line, "\n")] = '\0';
        memset(newLine, '\0', 60);
        newLineCounter = 0;
        int len = strlen(line);
        if(len == 0){
            printf("error\n");
            continue;
        }

        int error = 0;
        for(int i = 0; i<len; i++){
            if(isdigit(line[i])){
                newLine[newLineCounter] = line[i];
                newLineCounter++;
            } else if(line[i] == 'o' || line[i] == 'O'){
                newLine[newLineCounter] = '0';
                newLineCounter++;
            } else if(line[i] == 'l'){
                newLine[newLineCounter] = '1';
                newLineCounter++;
            } else if(line[i] != ',' && line[i] != ' '){
                error = 1;
                break;
            }
        }

        newLine[newLineCounter] = '\0';
        if(error == 1 || strlen(newLine) == 0){
            printf("error\n");
            continue;
        }

        errno = 0;
        char *endptr;
        long ans = strtol(newLine, &endptr, 10);

        if (errno == ERANGE || ans > INT_MAX || ans < INT_MIN) {
            printf("error\n");
            continue;
        }
        printf("%d\n", (int)ans);
        
    };
    return 0;
}