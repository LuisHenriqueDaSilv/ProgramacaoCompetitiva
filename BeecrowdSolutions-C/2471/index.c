#include <stdio.h>
#include <string.h>


int findUniqueIndex(int arr[], int size, int* common) {
    if (arr[0] == arr[1]) {
        *common = arr[0];
    } else if (arr[0] == arr[2]) {
        *common=arr[0]; 
        return 1; 
    } else {
        *common=arr[1]; 
        return 0;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] != *common) {
            return i;
        }
    }
    return -1;
}

int main(){
  int dimen;
  scanf("%d", &dimen);
  int cub[dimen][dimen];

  for(int i =0; i<dimen; i++){
    for(int j=0; j<dimen; j++){
      scanf("%d", &cub[i][j]);
    }
  }
  int lineSums[dimen];
  int columnSums[dimen];
  for(int i =0; i<dimen; i++){
    int columnSum = 0;
    int lineSum = 0;
    for(int j=0; j<dimen; j++){
      lineSum+=cub[i][j];
      columnSum+=cub[j][i];
    }
    lineSums[i] = lineSum;
    columnSums[i] = columnSum;
  }
  int common;
  int x = findUniqueIndex(lineSums, dimen,  &common);
  int y = findUniqueIndex(columnSums, dimen, &common);
  int colSum = 0;
  for(int i =0; i<dimen;i++){
    if(i != y){
      colSum+=cub[x][i];
    }
  }
  printf("%d %d\n", common-colSum, cub[x][y]);
}