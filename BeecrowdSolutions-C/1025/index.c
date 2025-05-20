#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void*b){
  int aValue = *(int *)a;
  int bValue = *(int *)b;
  return aValue - bValue;
}

int main(){

  int n, q, i =1;
  while(1){
    scanf(" %d %d", &n, &q);
    if(n == 0 && q==n){ break; }

    printf("CASE# %d:\n", i);
    i++;
    int inputs[n];
    for(int k =0; k<n; k++){ scanf(" %d", &inputs[k]); }

    qsort(inputs, n, sizeof(int), compare);

    for(int k = 0; k<q; k++){
      int try;
      scanf(" %d", &try);
      int found = 0;
      for( int p=0; p<n; p++){
        if(inputs[p] == try){
          printf("%d found at %d\n", try, p+1);
          found = 1;
          break;
        }
      }
      if(found == 0){ printf("%d not found\n", try); }
    }
  }
  return 0;
}