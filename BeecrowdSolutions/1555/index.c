#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int x, y, input, rafael, beto, carlos;
    while(n--){
        scanf("%d %d", &x, &y);
        rafael =  pow(3*x, 2) + pow(y, 2);//(3x)² + y²
        beto = 2*pow(x, 2) + pow(5*y, 2); //2(x²) + (5y)²
        carlos = -100*x + pow(y, 3); //-100x + y³

        if(beto > carlos && beto > rafael ){
            printf("Beto ganhou\n");
        } else if(carlos > beto && carlos > rafael){
            printf("Carlos ganhou\n");
        } else {
            printf("Rafael ganhou\n");
        }
    }
    return 0;
}