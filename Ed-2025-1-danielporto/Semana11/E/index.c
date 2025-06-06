#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} Movie;

int cmp(const void *a, const void *b){
    Movie *m1 = (Movie *)a;
    Movie *m2 = (Movie *)b;
    return m1->end - m2->end;
}

int main(){
    int n;
    scanf("%d", &n);
    Movie movies[n];

    for(int i = 0; i < n; i++){
        scanf("%d %d", &movies[i].start, &movies[i].end);
    }

    qsort(movies, n, sizeof(Movie), cmp);

    int count = 0;
    int last_end = 0;
    for(int i = 0; i < n; i++){
        if(movies[i].start >= last_end){
            count++;
            last_end = movies[i].end;
        }
    }

    printf("%d\n", count);
    return 0;
}
