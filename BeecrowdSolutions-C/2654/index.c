#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
  char name[200];
  int kills;
  int deaths;
  int power;
} God;

int sortComp(const void *g1, const void *g2){
  God *god1 = (God *)g1;
  God *god2 = (God *)g2;

  if(god1->power > god2->power){return -1;};
  if(god1->power < god2->power){return 1;};

  if(god1->kills > god2->kills){return -1;};
  if(god1->kills < god2->kills){return 1;};

  if(god1->deaths > god2->deaths){return 1;};
  if(god1->deaths < god2->deaths){return -1;};

  return strcmp(god1->name,god2->name);

}

void swap(God *a, God *b) {
  God temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int n;
  scanf("%d", &n);

  God gods[n];
  for (int i = 0; i < n; i++) {
    scanf(" %s %d %d %d", gods[i].name, &gods[i].power, &gods[i].kills, &gods[i].deaths);
  }

  qsort(gods, n, sizeof(God), sortComp);

  printf("%s\n", gods[0].name);
  return 0;
}
