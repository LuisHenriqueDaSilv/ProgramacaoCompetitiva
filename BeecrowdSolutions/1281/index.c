#include <stdio.h>
#include <string.h>

typedef struct {
  char name[60];
  double price;
} Product;

int main(){
  int n, p, k;
  double ans;
  scanf("%d", &n);
  char inputName[60];
  int qnt; 

  while(n--){
    scanf("%d", &p);
    Product products[p];

    for(int i = 0; i<p; i++){ scanf(" %s %lf", products[i].name, &products[i].price); }
    
    scanf("%d", &k);
    ans = 0.0;
    for(int i= 0; i<k; i++){
      scanf(" %s %d", inputName, &qnt);

      for(int k = 0; k<p; k++){
        if(strcmp(products[k].name, inputName) == 0){
          ans += products[k].price*qnt;
          break;
        }
      }
    }

    printf("R$ %.2lf\n", ans);

  }
  return 0;
}