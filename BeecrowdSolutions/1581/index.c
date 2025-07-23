#include <stdio.h>
#include <string.h>

int main(){
  int n, p;
  char input[21], firstInput[21];
  scanf("%d", &n);
  for(int i =0; i<n; i++){
    scanf("%d", &p);
    int fail = 0;
    for(int j =0; j<p; j++){
      if(j == 0){
        scanf(" %s", firstInput);
        continue;
      }
      scanf(" %s", input);

      if(strcmp(input, firstInput) != 0){
        fail = 1;
      }
    }

    if(fail == 0){
      printf("%s\n", firstInput);
    } else {
      printf("ingles\n");
    }
  }
  return 0;
}