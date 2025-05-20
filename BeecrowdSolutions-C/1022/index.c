#include <stdio.h>

#define MAX(A, B)((A) > (B)? (A):(B))

int main(){

  int n, n1, n2, d1, d2, nAns, dAns, mnAns, mdAns;
  char op;
  scanf("%d", &n);
  while(n--){
    scanf("%d / %d %c %d / %d\n", &n1, &d1, &op, &n2, &d2);
    if(op == '+'){
      nAns = (n1*d2+n2*d1);
      dAns = (d1*d2);
    } else if(op == '-'){
      nAns = (n1*d2-n2*d1);
      dAns = (d1*d2);
    } else if(op == '*'){
      nAns = (n1*n2);
      dAns = (d1*d2);
    } else if(op == '/'){
      nAns = (n1*d2);
      dAns = (n2*d1);
    } 
    int max = MAX(nAns,dAns);
    while(max){
      if(nAns%max == 0 && dAns%max == 0){
        mnAns = nAns/max;
        mdAns = dAns/max;
        break;
      }
      max--;
    }
    printf("%d/%d = %d/%d\n", nAns, dAns, mnAns, mdAns);
  }
  return 0;
}