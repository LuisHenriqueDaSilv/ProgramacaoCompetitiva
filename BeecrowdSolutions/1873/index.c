#include <stdio.h>
#include <string.h>


int main() {
  int n;
  char rajesh[20], sheldon[20];
  scanf("%d", &n);
  while (n--) {
    scanf(" %s %s", rajesh, sheldon);
    if (strcmp(rajesh, sheldon) == 0) {
      printf("empate\n");
    } else if(
      (strcmp(rajesh, "spock") == 0 && strcmp(sheldon, "pedra") == 0) || 
      (strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "spock") == 0) || 
      (strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "lagarto") == 0) || 
      (strcmp(rajesh, "papel") == 00 && strcmp(sheldon, "spock") == 0) || 
      (strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "papel") == 0) || 
      (strcmp(rajesh, "papel") == 0 && strcmp(sheldon, "pedra") == 0) || 
      (strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "papel") == 0) || 
      (strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "lagarto") == 0) || 
      (strcmp(rajesh, "spock") == 0 && strcmp(sheldon, "tesoura") == 0) || 
      (strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "tesoura") == 0)
    ) {printf("rajesh\n");}
    else {printf("sheldon\n");}
  }

  return 0;
}