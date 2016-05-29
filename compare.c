#include <stdio.h>
#include <string.h>
#include "sort.h"
#define NUM 20

char compare(char* str3){

    char dic[NUM];
    FILE* fp = fopen("/usr/share/dict/words","r");

    if(fp == NULL){
     printf("Fail to open the file.");
   }

    while(fgets(dic,NUM,fp)!= NULL){
      char dic2 =sort(dic);
      char *ret;
      
      if((ret =strstr(str3,dic2))!= NULL){
	printf("dic2:%s,found:%s,str[%d]:%s\n",dic2,dic,ret,str3);
      }else{
	printf("Not found.\n");
      }

    }

    fclose(fp); 
    
    }
