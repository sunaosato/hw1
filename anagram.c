#include <stdio.h>
#include <string.h>
#include "sort.h"
#define NUM 20





int main(){

  char str[NUM];
  
  printf("Please enter the 16 characters.\n");
  scanf("%s",str);

  char str3 = sort(str);
  printf("sort:%s\n",str3);
 
  /*  char dic[NUM];
  FILE* fp = fopen("/usr/share/dict/words","r");

     if(fp == NULL){
     printf("Fail to open the file.");
   }
     //  fgets(dic,NUM,fp);
    
    //  char  dic2 = sort(dic);
    printf("dic:%s\n",dic);
    /*char dic2;
    while(fgets(dic,NUM,fp)!= NULL){
           dic2 = sort(dic);
	   char *ret;
      
      if((ret =strstr(str3,dic2))!= NULL){
	printf("dic2:%s,found:%s,str[%d]:%s\n",dic2,dic,ret,str3);
      }else{
	printf("Not found.\n");

	}

      printf("%s\n",dic2);
      }*/
 
    compare(str3);

    // fclose(fp);

  return 0;
}
