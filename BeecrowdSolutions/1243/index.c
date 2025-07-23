#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char input[60];
    int validWord, wordLengthSum, wordCounter, wordLength, dotCounter;

    while (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = '\0'; // Remove o '\n'
        validWord = 1;
        wordLengthSum = 0;
        wordCounter = 0;
        wordLength = 0;
        dotCounter = 0;

        for (int i = 0; i <= strlen(input); i++) {
            if (input[i] == ' ' || input[i] == '\0') {
                // Finaliza a palavra atual
                if (validWord && wordLength > 0) {
                    wordLengthSum += wordLength;
                    wordCounter++;
                }
                validWord = 1; // Reset para a próxima palavra
                wordLength = 0;
                dotCounter = 0;
            } else if (validWord) {
                if (input[i] == '.') {
                    if (dotCounter == 0 && (i == 0 || input[i - 1] != ' ') && (input[i + 1] == ' ' || input[i + 1] == '\0')) {
                        dotCounter++;
                    } else {
                        validWord = 0;
                    }
                } else if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
                    wordLength++;
                } else {
                    validWord = 0; // Caracter inválido
                }
            }
        }

        if (wordCounter == 0) {
            printf("250\n"); // Nenhuma palavra válida
        } else {
            int media = wordLengthSum / wordCounter;
            if (media >= 6) {
                printf("1000\n");
            } else if (media <= 3) {
                printf("250\n");
            } else {
                printf("500\n");
            }
        }
    }

    return 0;
}
