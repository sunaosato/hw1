#include <stdio.h>
#include <string.h>
#include"sort.h"

char sort(char* str2){
  int i ,j,len = strlen(str2);
  char a;
  
  for(i = 0; i < len;i++){
    for(j = i+1;j < len;j++){

      if(str2[i]>str2[j]){
	a = str2[i];
	str2[i]= str2[j];
	str2[j]= a;
      }
    }
  }

      printf("%s\n",str2);
}
