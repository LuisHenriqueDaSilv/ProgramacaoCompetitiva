#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  return strcmp((char *)a, (char *)b);
}

int main(){
  int n;
  while(scanf(" %d\n", &n) != EOF){
    char inputs[n][250];
    memset(inputs, '\0', sizeof(inputs));

    for(int i = 0; i<n; i++){
      fgets(inputs[i], 250, stdin);
      inputs[i][strcspn(inputs[i], "\n")] = '\0';
    }

    qsort(inputs,n, sizeof(inputs[0]), compare);

    int ans = 0, currentCounter = 0;
    for(int i = 1; i<n; i++){// Cada numero
      int len = strlen(inputs[i]);
      for(int k = 0; k<len; k++){ // Cada char
        if(inputs[i][k] == inputs[i-1][k]){
          ans++;
        } else {
          break;
        }
      }
    }

    printf("%d\n", ans);
  }
  return 0;
}