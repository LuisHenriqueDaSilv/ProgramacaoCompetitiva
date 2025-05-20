#include <stdio.h>

int main(){

    char participante1[15];
    char participante2[15];

    int contador = 1, count;

    while (1)
    {
        scanf("%d", &count);
        if (count == 0)
        {
            break;
        }

        scanf("%s", participante1);
        scanf("%s", participante2);

        int num1;
        int num2;

        if (contador > 1)
        {
            printf("\n");
        }

        printf("Teste %d\n", contador++);
        for (int i = 0; i < count; i++)
        {
            scanf("%d", &num1);
            scanf("%d", &num2);

            if ((num1 + num2) % 2 == 0)
            {
                printf("%s\n", participante1);
            }
            else
            {
                printf("%s\n", participante2);
            }
        }
    }

    printf("\n");

    return 0;
}