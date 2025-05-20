#include <stdio.h>

void sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int ns[n];
  for(int i =0; i<n; i++){
    scanf("%d", &ns[i]);
  }

  sort(ns, n);

  int count = 1, current;
  for(int i = 0; i<n; i++){
    if(i==0){
      current = ns[i];
      continue;
    }

    if(ns[i] != current){
      printf("%d aparece %d vez(es)\n", current, count);
      count = 1;
      current = ns[i];
    } else {
      count++;
    }
  }
  printf("%d aparece %d vez(es)\n", current, count);


  return 0;
}