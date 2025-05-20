#include <stdio.h>
#include <string.h>

#define MAX(A,B)((A>B)? (A):(B));

void main (void){

  int  i = 0, n;
  char input1[60];
  char input2[60];

  scanf("%d", &n);
  while (n--){
    i = 0;
    scanf("%s %s", input1, input2);
    int len1 = strlen(input1);
    int len2 = strlen(input2);

    int biggest = MAX(len1, len2);

    while (biggest){
      if (i < len1) { printf("%c", input1[i]); }
      if (i < len2) { printf("%c", input2[i]); }
      i++;
      biggest--;
    }

    printf("\n");
  }
}