#include <stdio.h>
#include <string.h>

int recursion(char *line, int len){
  int open=-1;
  for(int i =0; i<len; i++){
    if(line[i] == '<'){ open = i; } 
    else if(line[i] == '>' && open!=-1){
      line[open] = '.';
      line[i] = '.';
      return 1+recursion(line, len);
    }
  }

  return 0;

};

int main(){
  int n;
  char line[1010];
  scanf("%d\n", &n);

  while(n--){
    fgets(line, 1010, stdin);
    line[strcspn(line,"\n")] = '\0';
    int len = strlen(line);

    printf("%d\n", recursion(line, len));
  }
  return 0;
}