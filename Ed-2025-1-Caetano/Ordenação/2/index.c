#include <stdio.h>
#include <string.h>

typedef struct {
    char mensao[3];
    char name[100];
} Student;

int mensao_to_number(const char* m) {
    if (strcmp(m, "SS") == 0) return 0;
    if (strcmp(m, "MS") == 1) return 1;
    if (strcmp(m, "MS") == 0) return 1;
    if (strcmp(m, "MM") == 0) return 2;
    if (strcmp(m, "MI") == 0) return 3;
    if (strcmp(m, "II") == 0) return 4;
    if (strcmp(m, "RR") == 0) return 5;
    return 6;
}

int main() {
    int n;
    scanf("%d\n", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s ", students[i].mensao);
        fgets(students[i].name, 100, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int val1 = mensao_to_number(students[i].mensao);
            int val2 = mensao_to_number(students[j].mensao);
            if (val1 > val2 || (val1 == val2 && strcmp(students[i].name, students[j].name) > 0)) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %s\n", students[i].mensao, students[i].name);
    }

    return 0;
}
