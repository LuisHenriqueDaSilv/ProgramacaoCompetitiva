#include <stdio.h>
#include <string.h>

int main(){
  int n, length;
  scanf("%d", &n);
  getchar();
  char input[102];

  for(int i = 0; i<n; i++){
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    
    length = strlen(input);

    char part1[(length/2)+1];
    char part2[(length/2)+1];
    
    int j = 0;
    for(int k=(length/2)-1; k>=0; k--){
      part1[j] =input[k];
      j++;
    }
    j =0;
    for(int k=length-1; k>=length/2; k--){
      part2[j] = input[k];
      j++;
    }
    part2[(length/2)] = '\0';
    part1[(length/2)] = '\0';

    printf("%s%s\n", part1, part2);
  }
  return 0;
}