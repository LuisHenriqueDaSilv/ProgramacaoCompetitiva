#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float iras[n];

    for(int i = 0; i<n; i++){
        scanf("%f", &iras[i]);
    }

    for(int i = 0; i<n; i++){
        int swapped = 0;
        for(int j = i+1; j<n; j++){
            if(iras[i] < iras[j]){
                float temp = iras[i];
                iras[i] = iras[j];
                iras[j] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }

    for(int i = 0; i<n; i++){
        printf("%.2f\n", iras[i]);
    }
}