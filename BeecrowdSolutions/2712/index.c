#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

  int n;
  scanf("%d", &n);
  for(int i =0;i<n; i++){
    char board[101];
    scanf(" %s", board);
    int len = strlen(board);
    if(board[3] != '-' || len !=8){
      printf("FAILURE\n");
      continue;
    }
    int invalid = 0;
    for(int i =0; i<3; i++){
      if(board[i]  < 65 || board[i] >90){
        invalid = 1;
        break;
      }
    }
    for(int i =4; i<8; i++){
      if(!isdigit(board[i])){
        invalid = 1;
        break;
      }
    }
    if(invalid){
      printf("FAILURE\n");
      continue;
    }

    if(board[len-1] =='1' || board[len-1] =='2'){
      printf("MONDAY\n"); 
    }
    if(board[len-1] =='3' || board[len-1] =='4'){
      printf("TUESDAY\n"); 
    }
    if(board[len-1] =='5' || board[len-1] =='6'){
      printf("WEDNESDAY\n"); 
    }
    if(board[len-1] =='7' || board[len-1] =='8'){
      printf("THURSDAY\n"); 
    }
    if(board[len-1] =='9' || board[len-1] =='0'){
      printf("FRIDAY\n"); 
    } 

  }
  return 0;
}