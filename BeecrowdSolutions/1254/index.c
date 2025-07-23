  #include <stdio.h>
  #include <string.h>
  #include <ctype.h>

  int main(){
    char tag[20];
    char line[60];
    char ans[100];
    char newTag[10];
    while(fgets(tag, 20, stdin)){
      tag[strcspn(tag, "\n")] = '\0';
      fgets(newTag, 10, stdin);
      newTag[strcspn(newTag, "\n")] = '\0';
      fgets(line, 60, stdin);
      line[strcspn(line, "\n")] = '\0';

      memset(ans, '\0', sizeof(ans));
      int ansIndex = 0;
      int inTag = 0;
      for(int i =0; i<strlen(line); i++){
        if(line[i] == '<'){
          inTag = 1;
          ans[ansIndex] = '<';
          ansIndex++;
          continue;
        } else if (line[i] == '>'){
          inTag = 0;
          ans[ansIndex] = '>';
          ansIndex++;
          continue;
        };

        if(inTag ==1){
          int isTag = 1;
          for(int k=i; k<i+strlen(tag); k++){
            char lowerLine = tolower(line[k]);
            char lowerTag = tolower(tag[k-i]); 
            if(lowerLine != lowerTag){
              isTag = 0;
              break;
            };
          }
          if(isTag == 1){
            if(line[i] == '<'){
              ans[ansIndex] = '<';
              ansIndex++;
            }
            for(int k = 0; k<strlen(newTag); k++){
              ans[ansIndex] = newTag[k];
              ansIndex++;
            }
            i+=strlen(tag)-1;
            continue;
          }
        }
        ans[ansIndex] = line[i];
        ansIndex++; 
      }

      printf("%s\n", ans);  
      
    };
    return 0;
  }