#include <stdio.h>
#include "sort.h"
/*#include <string.h>

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
    }*/

int main(){

  char str[20];
  //  FILE* fp;

  // fp = fopen("/usr/share/dict/words","r");
  
  printf("Please enter the 16 characters.\n");
  scanf("%s",str);

  char str3 = sort(str);

 

  return 0;
}
