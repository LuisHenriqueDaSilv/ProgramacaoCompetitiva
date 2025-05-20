#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int aV = *(int *)a;
    int bV = *(int *)b;

    if ((aV % 2 == 0) && (bV % 2 != 0)) return -1;
    if ((aV % 2 != 0) && (bV % 2 == 0)) return 1;
    if (aV % 2 == 0 && bV % 2 == 0) return aV - bV;
    if (aV % 2 != 0 && bV % 2 != 0) return bV - aV;

    return 0;
}

int main(){
  int n;
  scanf("%d", &n);
  int inputs[n];
  for(int i = 0; i<n; i++){
    scanf("%d", &inputs[i]);
  };

  qsort(inputs, n, sizeof(inputs[0]), compare);
  for(int i = 0; i<n; i++){
    printf("%d\n", inputs[i]);
  }

  return 0;
}