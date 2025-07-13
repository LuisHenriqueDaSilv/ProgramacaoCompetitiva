#include <stdio.h>
#include <string.h>

int upper_bound(int* arr, int size, int x) {
    int left = 0, right = size;
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] > x) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}


int main(){
    int n;
    scanf("%d", &n);
    int inputs[n];
    int lastInput;
    int ansCount = 0;
    int anss[n];

    for(int i =0; i<n; i++){
        scanf("%d", &lastInput);

        int pos = upper_bound(anss, ansCount, lastInput);
        if (pos == ansCount) {
            anss[ansCount++] = lastInput;
        } else {
            anss[pos] = lastInput;
        }
    }

    printf("%d\n", ansCount);
    return 0;
}