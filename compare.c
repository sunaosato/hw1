#include <stdio.h>
#include <string.h>
#include "sort.h"
#define NUM 20

void compare(char* str3){

    char dic[NUM];
    int lens =strlen(str3);
    FILE* fp = fopen("/usr/share/dict/words","r");

    if(fp == NULL){
     printf("Fail to open the file.");
   }
    int max =0;
    char mstr[NUM];
    
    while(fgets(dic,NUM,fp)!= NULL){
      char dic2[NUM];
      strcpy(dic2,dic); //dicをdic2へコピー
      sort(dic2);
      int lend = strlen(dic2);
      int i,j,k=0;
      
      for(i=0;i < lend; i++){
	for(j=0; j< lens;j++){
	  
	  if(str3[j]==dic2[i]){//文字が一致すればkを増やす
	    k=k+1;
	  }
	}
      }
      
      if(k > max){//kが一番大きかったとき
	if(k == lend){//kがdic2の長さと一致したら
	  max = k;//maxをkに更新
	  *mstr = *dic;//一番長い文字列を格納
	}
      }
    }
    if(max == 0){//辞書の中に無かったら
	printf("Not found./n");
      }else{
	printf("%s\n",mstr);
	}

    fclose(fp); 
    
}
