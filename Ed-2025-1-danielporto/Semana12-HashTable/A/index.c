#include <stdio.h>


int binarySearch(int* arr, int left, int right, int target){
    if(right >= left){
        int middle = left+ (right-left)/2;
        if(arr[middle] == target){
            return middle;
        } else if( arr[middle] > target ){
            return binarySearch(arr, left, middle-1, target);
        } else {
            return binarySearch(arr, middle+1, right, target);
        }
    } else {   
        return -1;
    }

}

int main(){
    int n, target;
    scanf("%d", &n);
    int inputs[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &inputs[i]);
    }
    scanf("%d", &target);
    int index = binarySearch(inputs, 0, n-1, target);
    if(index == -1){
        printf("-1 -1 0\n");
        return 0;
    }
    int ansA = index, ansB = index;

    while(inputs[ansA] == target){
        ansA--;
    }
    ansA++;
    while(inputs[ansB] == target){
        ansB++;
    }
    ansB--;

    printf("%d %d %d\n", ansA, ansB, ansB-ansA+1);
    return 0;
}