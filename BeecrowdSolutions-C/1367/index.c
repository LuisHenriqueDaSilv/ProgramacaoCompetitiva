#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  int n, idx;
  int incorrectCounters[26];
  int solutions[26];
  int correctTimes[26];
  int solutionsCounter;
  char currentProblem;
  int currentProblemTime;
  char currentProblemResult[12];
  while(1){
    scanf(" %d", &n);
    if(n == 0){break;}

    memset(incorrectCounters, 0, sizeof(incorrectCounters));
    memset(correctTimes, 0, sizeof(correctTimes));
    memset(solutions, 0, sizeof(solutions));
    solutionsCounter = 0;

    for(int i =0; i<n; i++){
      scanf(" %c %d %s", &currentProblem, &currentProblemTime, currentProblemResult);
      idx = currentProblem-65;
      if(strcmp(currentProblemResult, "correct") == 0){
        if(solutions[idx] == 0){
          solutionsCounter++;
          solutions[idx] = 1;
        }
        correctTimes[idx] += currentProblemTime;
      } else {
        incorrectCounters[idx]++;
      }
    }

    int sum = 0;
    for(int i =0; i<26; i++){
      if(solutions[i] == 1){
        sum+=correctTimes[i];
        if(incorrectCounters[i] != 0){
          sum+=incorrectCounters[i]*20;
        };
      }
    }
    printf("%d %d\n", solutionsCounter, sum);
  }
  return 0;
}