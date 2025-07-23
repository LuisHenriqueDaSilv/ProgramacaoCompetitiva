#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


typedef struct {
  char size;
  char owner[100];
  char color[100];
} People;

int sizeToNumber(char p1){
  if(p1 == 'P'){return 1;};
  if(p1 == 'M'){return 2;};
  if(p1 == 'G'){return 3;};
}

int colorToNumber(char color[100]){
  if(strcmp(color, "branco") == 0){return 1;}
  else return 2;
}

void toLowerStr(char *dest, const char *src) {
  while (*src) {
    *dest = tolower((unsigned char)*src);
    dest++;
    src++;
  }
  *dest = '\0';
}

int peopleCompare(const void *p1, const void *p2){
  People *people1 = (People * )p1;
  People *people2 = (People * )p2;

  int color1 = colorToNumber(people1->color);
  int color2 = colorToNumber(people2->color);
  if(color1 < color2){return -1;}
  if(color1 > color2){return 1;}

  int n1 = sizeToNumber(people1->size);
  int n2 = sizeToNumber(people2->size);
  if(n1 < n2)return -1;
  if(n1 > n2)return 1;

  return strcmp(people1->owner,people2->owner);

}


int main(){
  int n;
  int isFirst = 1;
  while(1){
    scanf("%d", &n);
    if(n == 0){
      break;
    }

    if(isFirst == 1){
      isFirst = 0;
    } else {
      printf("\n");
    }

    People peoples[n];
    memset(peoples, 0, sizeof(peoples));
    for(int i = 0; i<n; i++){
      scanf(" %[^\n]s", peoples[i].owner);
      scanf("%s %c", peoples[i].color, &peoples[i].size);
    }
    qsort(peoples, n, sizeof(People), peopleCompare);

    for(int i = 0; i<n; i++){
      printf("%s %c %s\n", peoples[i].color, peoples[i].size, peoples[i].owner );
    }


  }
  return 0;
}