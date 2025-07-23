#include <stdio.h>
#include <string.h>

int main(){
  char input1[53];
  char input2[53];
  while(fgets(input1, 53, stdin) && fgets(input2, 53, stdin)){
    input1[strcspn(input1, "\n")] = '\0';
    input2[strcspn(input2, "\n")] = '\0';

    int input1Len = strlen(input1);
    int input2Len = strlen(input2);
    int msum =0;

    for(int i =0; i<input1Len; i++){
      for(int j =0; j<input2Len; j++){
        int k = 0;
        while(i+k < input1Len && j+k < input2Len && input1[i+k] == input2[j+k]){
          k++;
        }
        if(k > msum){msum=k;}
      }
    }

    printf("%d\n", msum);
  }
  return 0;
}