#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include"sort.h"

char sort(char* str2){
  int i ,j,k,len = strlen(str2);
  char a;
  
  for(k=0;k < len;k++){
    str2[k]=tolower(str2[k]);
  }
  
  if(len > 1){
  for(i = 0; i < len;i++){
    for(j = i+1;j < len;j++){

      if(str2[i]>str2[j]){
	a = str2[i];
	str2[i]= str2[j];
	str2[j]= a;
      }
    }
  }

      printf("sort:%s\n",str2);
  }


}
