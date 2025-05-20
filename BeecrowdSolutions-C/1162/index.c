#include <stdio.h>

int main(){
    int n, k, counter, aux;
    scanf("%d", &n);

    while(n--){
        counter = 0;
        scanf("%d", &k);
        int inputs[k];
        for(int i = 0; i<k; i++){
            scanf("%d", &inputs[i]);
        }

        for(int i = 0; i<k; i++){
            for(int j = i+1; j<k; j++){
                if(inputs[i] > inputs[j]){
                    aux = inputs[i];
                    inputs[i] = inputs[j];
                    inputs[j] = aux;
                    counter++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", counter);
    }

    return 0;
}    