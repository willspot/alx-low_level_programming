#include "main.h" 
#include <stdlib.h>  
/** 
 * The function returns a pointer to an array of strings words
 * @strtow: split a string into two words
 * returns: NULL if str==NULL or str==""
 *
 */



char **strtow(char *str) {  
  if (str == NULL || str[0] == '\0') { 
     return NULL;  
  }  
  int words = 0; 
   for (int i = 0; str[i] != '\0'; i++) { 
       if (((i > 0) && (str[i - 1] != ' ')) || (str[i] != ' ')) {  
         words++; 
       } 
   }   
 char **wordsArray = (char**) malloc((words + 1)* sizeof(char*)); 
   int posStart = 0; int posEnd; int j = 0; 
    for (int i = 0; str[i] != '\0'; i++) { 
       if (((i > 0) && (str[i - 1]) == ' ') || (posStart == 0)){ 
          posStart= i ; 
       } else if ((str [i+1])=='\0' || str [i+1]==' '){ 
                 posEnd= i+1 ; 
                 wordsArray [j]= malloc((posEnd-posStart)+1); 
                 memcpy(wordsArray [j], &(str[posStart]),((posEnd-posStart))); 
                 wordsArray [j][((posEnd-posStart))]= "\0"; j++; 
         } 
     }   
       wordsArray [(words)]= NULL ;
         return wordsArray ;
}
