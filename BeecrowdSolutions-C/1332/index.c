#include <stdio.h>
#include <string.h>

int main(){
  int n;
  scanf("%d\n", &n);
  char input[10];
  char oneC[] = "one";
  char twoC[] = "two";
  char threeC[] = "three";
  while(n--){
    fgets(input, 10, stdin);
    input[strcspn(input, "\n")] = '\0';
    int len = strlen(input);

    int one=0,two=0, three =0;
    for(int i = 0; i<len; i++){
      if(i<3){
        if(input[i] == oneC[i]){one++;}
        if(input[i] == twoC[i]){two++;}
      }
      if(input[i] == threeC[i]){three++;}
    }

    if(len == 3){ three = 0; }
    if (one > two && one > three) { printf("1\n"); } 
    else if (two > one && two > three) { printf("2\n"); } 
    else { printf("3\n"); }
  }
  return 0;
}