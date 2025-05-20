#include <stdio.h>

int main() {
  int n;
  char opcoes[] = {'A', 'B', 'C', 'D', 'E'};
  while(1){
    scanf("%d", &n);
    if(n ==0){break;}
    for(int i =0; i<n; i++){
      int respostas[5];
      scanf("%d %d %d %d %d", &respostas[0], &respostas[1], &respostas[2], &respostas[3], &respostas[4]);

      int respondido = -1;
      for(int j=0; j<5;j++){
        if(respostas[j] <= 127){
          if(respondido==-1){
            respondido = j;
          } else {
            respondido = 10;
          }
        }
      }

      if(respondido == 10 || respondido == -1){
        printf("%c\n", '*');
      } else {
        printf("%c\n", opcoes[respondido]);
      }
    }
  }


  return 0;
}
