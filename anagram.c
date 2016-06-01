#include <stdio.h>
#include <string.h>
#include "sort.h"
#define NUM 20





int main(){

  char str[NUM];
  
  printf("Please enter the 16 characters.\n");
  scanf("%s",str);

  int len = strlen(str);


  sort(str);
  // printf("sort:%s\n",str);
 
 
  compare(str);


  return 0;
}
